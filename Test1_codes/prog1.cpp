/*
Smart Locker Allocation
A hostel wants to manage lockers whose number is decided at runtime. Create a class
Locker containing locker number, occupied status, and a dynamically allocated access-
code array.
Create n lockers dynamically. Implement overloaded functions setCode() such that one
version accepts a complete code and another changes the code at a specified position.
Access the lockers using pointers and correctly release all dynamically allocated memory.
*/

#include <iostream>
#include <cstring>
using namespace std;

class Locker {
    int lockerNumber;
    bool occupied;
    char *accessCode;
public:
    Locker() {
        lockerNumber = 0;
        occupied = false;
        accessCode = new char[20];
        strcpy(accessCode, "");
    }
    void setDetails(int num, bool status) {
        lockerNumber = num;
        occupied = status;
    }
    void setCode(const char *code) {
        strcpy(accessCode, code);
    }
    void setCode(const char *code, int position) {
        if (position >= 0 && position < 19)
            accessCode[position] = code[0];
    }
    void display() {
        cout << "Locker Number: " << lockerNumber << endl;
        cout << "Occupied: " << (occupied ? "Yes" : "No") << endl;
        cout << "Access Code: " << accessCode << endl;
    }
    ~Locker() {
        delete[] accessCode;
    }
};

int main() {
    int n;
    cout << "Enter number of lockers: ";
    cin >> n;
    Locker *lockers = new Locker[n];
    for (int i = 0; i < n; i++) {
        int num;
        bool status;
        cout << "\nEnter locker number: ";
        cin >> num;
        cout << "Enter occupied status (1/0): ";
        cin >> status;
        lockers[i].setDetails(num, status);
        char code[20];
        cout << "Enter access code: ";
        cin >> code;
        lockers[i].setCode(code);
        char newChar;
        int pos;
        cout << "Enter character to change and position: ";
        cin >> newChar >> pos;
        char temp[2] = {newChar, '\0'};
        lockers[i].setCode(temp, pos);
    }
    for (int i = 0; i < n; i++) {
        cout << "\nLocker " << i + 1 << endl;
        lockers[i].display();
    }
    delete[] lockers;
    return 0;
}
