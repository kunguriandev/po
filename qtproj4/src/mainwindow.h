#pragma once

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QGridLayout>
#include <cmath>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *_parent = nullptr);

private slots:
    void digitClicked();
    void operatorClicked();
    void memoryClicked();
    void equalClicked();
    void clearClicked();
    void percentClicked();
    void signClicked();
    void sqrtClicked();

private:
    QPushButton* createButton(const QString &_text, const char *_member);
    void calculate(double _operand);
    void handleError();

    QLineEdit *m_display;
    QString m_pendingOperator;
    double m_result;
    double m_memory;
    bool m_waitingForOperand;
};
