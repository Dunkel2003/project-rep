// Berechner.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//24.03.2025
//Manuel Dunkel
//This Project is a simple Calculator

#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int num1;
        int num2;
        char op;
        double result;
        cout << "This is an simple calculator\nEnter the first number:";
        cin >> num1;
        cout << "Enter the second number";
        cin >> num2;
        cout << "Enter an operator (+,-,*,/,%)";
        cin >> op;
        switch (op) 
        {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                result = num1 / num2;
                break;
            case '%':
                result = num1 % num2;
                break;
            default:
                cout << "You have not entered an operator";
        }
        cout << num1 << op << num2 << "=" << result;

        char end;
        cout << "Do you want to end the program? (y/n)";
        cin >> end;
        if (end == 'y')
            break;
    }
}

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
