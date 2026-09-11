/*
Laboratory Instrument Access
Create a class Instrument containing instrument ID, name, and a private access level.
Create another class LabSupervisor responsible for checking and modifying the access
level.
The supervisor must be able to access and modify the private members of Instrument
without making them public. Demonstrate the appropriate OOP mechanism. Create the
instrument dynamically and release it properly.
 */

#include <iostream>
#include <string>
using namespace std;

class Instrument {
    int instrumentID;
    string name;
    int accessLevel;
public:
    Instrument(int id, string n, int level) {
        instrumentID = id;
        name = n;
        accessLevel = level;
    }
    void display() {
        cout << "Instrument ID: " << instrumentID << endl;
        cout << "Name: " << name << endl;
        cout << "Access Level: " << accessLevel << endl;
    }
    friend class LabSupervisor;
};
class LabSupervisor {
public:
    void checkAccess(Instrument *instrument) {
        cout << "Current Access Level: " << instrument->accessLevel << endl;
    }
    void modifyAccess(Instrument *instrument, int newLevel) {
        instrument->accessLevel = newLevel;
        cout << "Access level modified successfully.\n";
    }
};
int main() {
    int id, level;
    string name;
    cout << "Enter Instrument ID: ";
    cin >> id;
    cout << "Enter Instrument Name: ";
    cin >> name;
    cout << "Enter Access Level: ";
    cin >> level;
    Instrument *instrument = new Instrument(id, name, level);
    LabSupervisor supervisor;
    cout << "\nInstrument Details\n";
    instrument->display();
    cout << "\nSupervisor Checking Access\n";
    supervisor.checkAccess(instrument);
    int newLevel;
    cout << "\nEnter new access level: ";
    cin >> newLevel;
    supervisor.modifyAccess(instrument, newLevel);
    cout << "\nUpdated Instrument Details\n";
    instrument->display();
    delete instrument;

    return 0;
}