/*
Classroom Attendance Manager – Friend Class
Create two classes named Classroom and AttendanceManager.
The Classroom class should contain the following private data members:
• Class Name
• Total Students
• Present Students
• Attendance Status
Declare AttendanceManager as a friend class of Classroom.
The AttendanceManager class should provide member functions to:
1. Display classroom information.
2. Update the number of present students.
3. Mark the class attendance as completed.
4. Display whether attendance has been completed.
5. Calculate and display the number of absent students.
*/

#include <iostream>
using namespace std;

class AttendanceManager;

class Classroom {
private:
    string className;
    int totalStudents;
    int presentStudents;
    string attendanceStatus;

public:
    Classroom(string name, int total, int present, string status) {
        className = name;
        totalStudents = total;
        presentStudents = present;
        attendanceStatus = status;
    }
    friend class AttendanceManager;
};

class AttendanceManager {
public:
    void displayInfo(Classroom &c) {
        cout << "\nClassroom Information: " << endl;
        cout << "Class Name: " << c.className << endl;
        cout << "Total Students: " << c.totalStudents << endl;
        cout << "Present Students: " << c.presentStudents << endl;
        cout << "Attendance Status: " << c.attendanceStatus << endl;
    }

    void updatePresentStudents(Classroom &c, int present) {
        if (present >= 0 && present <= c.totalStudents) {
            c.presentStudents = present;
            cout << "Present student count updated." << endl;
        } 
        else {
            cout << "Invalid number of present students." << endl;
        }
    }

    void markAttendanceCompleted(Classroom &c) {
        c.attendanceStatus = "Completed";
        cout << "Attendance marked as completed." << endl;
    }

    void displayAttendanceStatus(Classroom &c) {
        cout << "Attendance Status: " << c.attendanceStatus << endl;
    }

    void calculateAbsent(Classroom &c) {
        int absent = c.totalStudents - c.presentStudents;

        cout << "Absent Students: " << absent << endl;
    }
};

int main() {
    string name, status;
    int total, present;

    cout << "Enter class name: ";
    getline(cin, name);
    cout << "Enter total students: ";
    cin >> total;
    cout << "Enter present students: ";
    cin >> present;
    cout << "Enter attendance status (Pending/Completed): ";
    cin >> status;

    Classroom classroom(name, total, present, status);
    AttendanceManager manager;

    manager.displayInfo(classroom);
    manager.calculateAbsent(classroom);
    manager.markAttendanceCompleted(classroom);
    manager.displayAttendanceStatus(classroom);
    cout << "\nEnter updated number of present students: ";
    cin >> present;
    manager.updatePresentStudents(classroom, present);
    manager.calculateAbsent(classroom);

    return 0;
}