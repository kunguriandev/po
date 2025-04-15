#include "mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *_parent)
    : QMainWindow(_parent), m_result(0.0), m_memory(0.0), m_waitingForOperand(true)
{
    // menu
    QMenu *helpMenu = menuBar()->addMenu("Pomoc");
    QAction *aboutAction = helpMenu->addAction("O autorze");
    connect(aboutAction, &QAction::triggered, this, &MainWindow::showAbout);

    m_display = new QLineEdit("0");
    m_display->setReadOnly(true);
    m_display->setAlignment(Qt::AlignRight);
    m_display->setMaxLength(15);
    
    QFont font = m_display->font();
    font.setPointSize(font.pointSize() + 8);
    m_display->setFont(font);

    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->addWidget(m_display, 0, 0, 1, 5);

    // row 1
    mainLayout->addWidget(createButton("MRC", SLOT(memoryClicked())), 1, 0);
    mainLayout->addWidget(createButton("M-", SLOT(memoryClicked())), 1, 1);
    mainLayout->addWidget(createButton("M+", SLOT(memoryClicked())), 1, 2);
    mainLayout->addWidget(createButton("+", SLOT(operatorClicked())), 1, 4);

    // row 2
    mainLayout->addWidget(createButton("%", SLOT(percentClicked())), 2, 0);
    mainLayout->addWidget(createButton("7", SLOT(digitClicked())), 2, 1);
    mainLayout->addWidget(createButton("8", SLOT(digitClicked())), 2, 2);
    mainLayout->addWidget(createButton("9", SLOT(digitClicked())), 2, 3);
    mainLayout->addWidget(createButton("X", SLOT(operatorClicked())), 2, 4);

    // row 3
    mainLayout->addWidget(createButton("√", SLOT(sqrtClicked())), 3, 0);
    mainLayout->addWidget(createButton("4", SLOT(digitClicked())), 3, 1);
    mainLayout->addWidget(createButton("5", SLOT(digitClicked())), 3, 2);
    mainLayout->addWidget(createButton("6", SLOT(digitClicked())), 3, 3);
    mainLayout->addWidget(createButton("-", SLOT(operatorClicked())), 3, 4);

    // row 4
    mainLayout->addWidget(createButton("±", SLOT(signClicked())), 4, 0);
    mainLayout->addWidget(createButton("1", SLOT(digitClicked())), 4, 1);
    mainLayout->addWidget(createButton("2", SLOT(digitClicked())), 4, 2);
    mainLayout->addWidget(createButton("3", SLOT(digitClicked())), 4, 3);
    mainLayout->addWidget(createButton("/", SLOT(operatorClicked())), 4, 4);

    // row 5
    mainLayout->addWidget(createButton("C", SLOT(clearClicked())), 5, 0);
    mainLayout->addWidget(createButton("0", SLOT(digitClicked())), 5, 1);
    mainLayout->addWidget(createButton("Bin", SLOT(convertToBinary())), 5, 2);
    mainLayout->addWidget(createButton("Hex", SLOT(convertToHex())), 5, 3);
    mainLayout->addWidget(createButton("=", SLOT(equalClicked())), 5, 4);

    QWidget *centralWidget = new QWidget;
    centralWidget->setLayout(mainLayout);
    setCentralWidget(centralWidget);

    setWindowTitle("CALCULATOR");
    setFixedSize(400, 400); // fixed window size
}

QPushButton* MainWindow::createButton(const QString &_text, const char *_member)
{
    QPushButton *button = new QPushButton(_text);
    connect(button, SIGNAL(clicked()), this, _member);
    return button;
}

void MainWindow::digitClicked()
{
    if (m_display->text() == "Error") return;

    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    QString digitValue = clickedButton->text();

    if (m_waitingForOperand) {
        m_display->clear();
        m_waitingForOperand = false;
    }
    m_display->setText(m_display->text() + digitValue);
}

void MainWindow::operatorClicked()
{
    if (m_display->text() == "Error") return;

    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    QString newOperator = clickedButton->text();
    double operand = m_display->text().toDouble();

    if (!m_pendingOperator.isEmpty()) {
        calculate(operand);
        if (m_display->text() == "Error") return;
        m_display->setText(QString::number(m_result));
    } else {
        m_result = operand;
    }

    m_pendingOperator = newOperator == "X" ? "*" : newOperator;
    m_waitingForOperand = true;
}

void MainWindow::memoryClicked()
{
    if (m_display->text() == "Error") return;

    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    QString op = clickedButton->text();
    double value = m_display->text().toDouble();

    if (op == "M+") m_memory += value;
    else if (op == "M-") m_memory -= value;
    else if (op == "MRC") m_display->setText(QString::number(m_memory));
    m_waitingForOperand = true;
}

void MainWindow::equalClicked()
{
    if (m_display->text() == "Error") return;

    double operand = m_display->text().toDouble();
    calculate(operand);
    if (m_display->text() == "Error") return;
    m_pendingOperator.clear();
    m_display->setText(QString::number(m_result));
    m_waitingForOperand = true;
}

void MainWindow::clearClicked()
{
    m_display->setText("0");
    m_pendingOperator.clear();
    m_result = 0.0;
    m_waitingForOperand = true;
}

void MainWindow::percentClicked()
{
    if (m_display->text() == "Error") return;

    double value = m_display->text().toDouble();
    m_display->setText(QString::number(value / 100.0));
    m_waitingForOperand = true;
}

void MainWindow::signClicked()
{
    if (m_display->text() == "Error") return;

    QString text = m_display->text();
    if (text.startsWith("-")) {
        text.remove(0, 1);
    } else {
        text.prepend("-");
    }
    m_display->setText(text);
}

void MainWindow::sqrtClicked()
{
    if (m_display->text() == "Error") return;

    double value = m_display->text().toDouble();
    if (value < 0) {
        handleError();
        return;
    }
    m_display->setText(QString::number(sqrt(value)));
    m_waitingForOperand = true;
}

void MainWindow::convertToBinary()
{
    if (m_display->text() == "Error") return;

    int value = m_display->text().toInt();
    m_display->setText(QString::number(value, 2));
    m_waitingForOperand = true;
}

void MainWindow::convertToHex()
{
    if (m_display->text() == "Error") return;

    int value = m_display->text().toInt();
    m_display->setText(QString::number(value, 16).toUpper());
    m_waitingForOperand = true;
}

void MainWindow::showAbout()
{
    QMessageBox::about(this, "O autorze", 
                      "Prosty kalkulator\n"
                      "Autor: Krzysztof Ungurian 287130\n"
                      "Wersja: 1.0");
}

void MainWindow::calculate(double _operand)
{
    if (m_pendingOperator == "+") {
        m_result += _operand;
    } else if (m_pendingOperator == "-") {
        m_result -= _operand;
    } else if (m_pendingOperator == "*") {
        m_result *= _operand;
    } else if (m_pendingOperator == "/") {
        if (_operand == 0.0) {
            handleError();
            return;
        }
        m_result /= _operand;
    }
}

void MainWindow::handleError()
{
    m_display->setText("Error");
    m_pendingOperator.clear();
    m_result = 0.0;
    m_waitingForOperand = true;
}
