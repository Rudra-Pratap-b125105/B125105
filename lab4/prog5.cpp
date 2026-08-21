/*
Event Registration Verification – Friend Function
Create a class named EventParticipant containing the following private data members:
• Participant Name
• Age
• Registration Status
Write a friend function named verifyParticipant() that determines whether the participant 
is eligible for the event.
A participant is eligible only if:
• The participant is 18 years or older.
• The registration status is active.
Display the participant details and either “Eligible” or “Not Eligible”.
*/

#include <iostream>
using namespace std;

class EventParticipant {
private:
    string participantName;
    int age;
    string registrationStatus;

public:
    EventParticipant(string name, int a, string status) {
        participantName = name;
        age = a;
        registrationStatus = status;
    }
    friend void verifyParticipant(EventParticipant p);
};

void verifyParticipant(EventParticipant p) {
    cout << "\nParticipant Details: " << endl;
    cout << "Name: " << p.participantName << endl;
    cout << "Age: " << p.age << endl;
    cout << "Registration Status: " << p.registrationStatus << endl;

    if (p.age >= 18 && p.registrationStatus == "Active")
        cout << "Eligibility: Eligible" << endl;
    else
        cout << "Eligibility: Not Eligible" << endl;
}

int main() {
    string name, status;
    int age;

    cout << "Enter participant name: ";
    getline(cin, name);
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter registration status (Active/Inactive): ";
    cin >> status;

    EventParticipant p(name, age, status);
    verifyParticipant(p);

    return 0;
}