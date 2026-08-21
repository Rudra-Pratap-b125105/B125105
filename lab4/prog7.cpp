/*
Museum Exhibit Controller – Friend Class
Create two classes named Exhibit and MuseumManager.
The Exhibit class should contain the following private data members:
• Exhibit Name
• Exhibit ID
• Visitor Count
• Display Status
Declare MuseumManager as a friend class of Exhibit.
The MuseumManager class should provide member functions to:
1. Display exhibit information.
2. Add visitors to the exhibit.
3. Reset the visitor count.
4. Open or close the exhibit.
5. Display whether the exhibit is currently open.
*/

#include <iostream>
using namespace std;

class MuseumManager;

class Exhibit {
private:
    string exhibitName;
    int exhibitID;
    int visitorCount;
    bool displayStatus;

public:
    Exhibit(string name, int id, int visitors, bool status) {
        exhibitName = name;
        exhibitID = id;
        visitorCount = visitors;
        displayStatus = status;
    }

    friend class MuseumManager;
};

class MuseumManager {
public:
    void displayInfo(Exhibit &e) {
        cout << "\nExhibit Information: " << endl;
        cout << "Exhibit Name: " << e.exhibitName << endl;
        cout << "Exhibit ID: " << e.exhibitID << endl;
        cout << "Visitor Count: " << e.visitorCount << endl;
        cout << "Display Status: " << (e.displayStatus ? "Open" : "Closed") << endl;
    }
    void addVisitors(Exhibit &e, int visitors) {
        e.visitorCount += visitors;
        cout << visitors << " visitors added." << endl;
    }
    void resetVisitorCount(Exhibit &e) {
        e.visitorCount = 0;
        cout << "Visitor count reset." << endl;
    }
    void openExhibit(Exhibit &e) {
        e.displayStatus = true;
        cout << "Exhibit opened." << endl;
    }
    void closeExhibit(Exhibit &e) {
        e.displayStatus = false;
        cout << "Exhibit closed." << endl;
    }
    void checkStatus(Exhibit &e) {
        if (e.displayStatus)
            cout << "The exhibit is currently OPEN." << endl;
        else
            cout << "The exhibit is currently CLOSED." << endl;
    }
};

int main() {
    string name;
    int id, visitors, status;

    cout << "Enter exhibit name: ";
    getline(cin, name);
    cout << "Enter exhibit ID: ";
    cin >> id;
    cout << "Enter visitor count: ";
    cin >> visitors;
    cout << "Enter display status (1 for Open, 0 for Closed): ";
    cin >> status;

    Exhibit e(name, id, visitors, status);
    MuseumManager manager;
    manager.displayInfo(e);
    manager.addVisitors(e, 10);
    manager.checkStatus(e);
    manager.closeExhibit(e);
    manager.checkStatus(e);
    manager.resetVisitorCount(e);

    cout << "\nAfter Operations:" << endl;
    manager.displayInfo(e);

    return 0;
}