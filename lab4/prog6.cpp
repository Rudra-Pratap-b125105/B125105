/*
Printer Control System – Friend Class
Create two classes named Printer and PrinterManager.
The Printer class should contain the following private data members:
• Printer Name
• Number of Pages Printed
• Ink Level
• Power Status
Declare PrinterManager as a friend class of Printer.
The PrinterManager class should provide member functions to:
1. Display printer information.
2. Turn the printer ON.
3. Turn the printer OFF.
4. Check the ink level.
5. Reset the page count.
*/

#include <iostream>
using namespace std;

class PrinterManager;

class Printer {
private:
    string printerName;
    int pagesPrinted;
    int inkLevel;
    bool powerStatus;

public:
    Printer(string name, int pages, int ink, bool power) {
        printerName = name;
        pagesPrinted = pages;
        inkLevel = ink;
        powerStatus = power;
    }

    friend class PrinterManager;
};

class PrinterManager {
public:
    void displayInfo(Printer &p) {
        cout << "\nPrinter Information: " << endl;
        cout << "Printer Name: " << p.printerName << endl;
        cout << "Pages Printed: " << p.pagesPrinted << endl;
        cout << "Ink Level: " << p.inkLevel << "%" << endl;
        cout << "Power Status: " << (p.powerStatus ? "ON" : "OFF") << endl;
    }
    void turnOn(Printer &p) {
        p.powerStatus = true;
        cout << "Printer turned ON." << endl;
    }
    void turnOff(Printer &p) {
        p.powerStatus = false;
        cout << "Printer turned OFF." << endl;
    }
    void checkInkLevel(Printer &p) {
        cout << "Ink Level: " << p.inkLevel << "%" << endl;
    }
    void resetPageCount(Printer &p) {
        p.pagesPrinted = 0;
        cout << "Page count has been reset." << endl;
    }
};

int main() {
    string name;
    int pages, ink;
    int power;

    cout << "Enter printer name: ";
    getline(cin, name);
    cout << "Enter number of pages printed: ";
    cin >> pages;
    cout << "Enter ink level (%): ";
    cin >> ink;
    cout << "Enter power status (1 for ON, 0 for OFF): ";
    cin >> power;

    Printer p(name, pages, ink, power);

    PrinterManager manager;

    manager.displayInfo(p);
    manager.turnOn(p);
    manager.checkInkLevel(p);
    manager.resetPageCount(p);
    cout << "\nAfter Operations:" << endl;
    manager.displayInfo(p);
    manager.turnOff(p);

    return 0;
}