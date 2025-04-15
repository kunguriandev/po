# Kalkulator Qt - Dokumentacja techniczna

## Opis
Aplikacja kalkulatora zbudowana na frameworku Qt przy użyciu C++, oferująca:
- Podstawowe i zaawansowane operacje matematyczne
- Funkcje pamięci
- Konwersję między systemami liczbowymi

## Klasa MainWindow

### Pola publiczne 
- `MainWindow(QWidget *parent = nullptr)` - Konstruktor inicjalizujący komponenty UI
- `double getMemory() const` - Zwraca aktualną wartość pamięci
- `void setMemory(double value)` - Ustawia wartość pamięci

### Zmienne prywatne
- `QLineEdit *m_display` - Widget wyświetlacza wyników
- `QString m_pendingOperator` - Przechowuje bieżącą operację
- `double m_result` - Wynik obliczeń
- `double m_memory` - Pamięć kalkulatora
- `bool m_waitingForOperand` - Flaga stanu wprowadzania operatora 

### Metody prywatne
- `QPushButton* createButton()` - Pozwala na tworzenie przycisków UI
- `void calculate()` - Wykonuje operacje matematyczne
- `void handleError()` - Zarządza stanami błędów

### Sloty (Obsługa zdarzeń)
#### Operacje podstawowe
- `digitClicked()` - Obsługa wprowadzania cyfr 0-9 i kropki dziesiętnej
- `operatorClicked()` - Obsługa operacji +, -, *, /
- `equalClicked()` - Wykonuje obliczenia
- `clearClicked()` - Resetuje kalkulator

#### Funkcje zaawansowane
- `percentClicked()` - Zamienia liczbe na procent
- `signClicked()` - Zmiana znaku
- `sqrtClicked()` - Pierwiastek 
- `memoryClicked()` - Operacje pamięci (M+, M-, MRC)
- `convertToBinary()` - Konwersja dziesiętna na binarną
- `convertToHex()` - Konwersja dziesiętna na szesnastkową

## Komponenty interfejsu
- Stały rozmiar okna (400x400)
- Klawiatura numeryczna (0-9)
- Przyciski operacji (+, -, *, /, =)
- Przyciski funkcji (√, %, ±)
- Przyciski pamięci (M+, M-, MRC)
- Przyciski konwersji (Bin, Hex)

## Obsługa błędów
- Obsługa błędu przy dzieleniu przez 0
- Obsługa błędu przy pierwiastkowaniu liczby ujemnej
- Wyświetlanie stanu "Error" i automatyczny reset

