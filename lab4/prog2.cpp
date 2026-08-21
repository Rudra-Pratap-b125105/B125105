/*
Two-Factor Login – Friend Function
Create a class named UserAccount containing the following private data members:
• Username
• Login Attempts
• Account Status
Write a friend function named checkAccount() that accesses the private members and
checks the account status.
If the number of unsuccessful login attempts is 3 or more, display “Account Locked”;
otherwise display “Account Active”.
The function should also display the username and number of login attempts.
*/

#include <iostream>
using namespace std;

class UserAccount {
private:
    string username;
    int loginAttempts;
    string accountStatus;

public:
    UserAccount(string user, int attempts, string status) {
        username = user;
        loginAttempts = attempts;
        accountStatus = status;
    }
    friend void checkAccount(UserAccount u);
};

void checkAccount(UserAccount u) {
    cout << "\nAccont Status: " << endl;
    cout << "Username: " << u.username << endl;
    cout << "Login Attempts: " << u.loginAttempts << endl;

    if (u.loginAttempts >= 3)
        cout << "Account Status: Account Locked" << endl;
    else
        cout << "Account Status: Account Active" << endl;
}

int main() {
    string username, status;
    int attempts;

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter number of unsuccessful login attempts: ";
    cin >> attempts;
    cout << "Enter account status: ";
    cin >> status;

    UserAccount user(username, attempts, status);
    checkAccount(user);

    return 0;
}