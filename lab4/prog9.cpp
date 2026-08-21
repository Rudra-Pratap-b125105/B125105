/*
Digital Wallet Controller – Friend Class
Create two classes named DigitalWallet and WalletManager.
The DigitalWallet class should contain the following private data members:
• User Name
• Wallet Balance
• Wallet Status
Declare WalletManager as a friend class of DigitalWallet.
The WalletManager class should provide member functions to:
1. Display wallet details.
2. Add money to the wallet.
3. Deduct money from the wallet if sufficient balance exists.
4. Disable the wallet.
5. Display the current wallet status.
*/

#include <iostream>
using namespace std;

class WalletManager;

class DigitalWallet {
private:
    string userName;
    float walletBalance;
    string walletStatus;

public:
    DigitalWallet(string name, float balance, string status) {
        userName = name;
        walletBalance = balance;
        walletStatus = status;
    }

    friend class WalletManager;
};

class WalletManager {
public:
    void displayDetails(DigitalWallet &w) {
        cout << "\nDigital Wallet Details: " << endl;
        cout << "User Name: " << w.userName << endl;
        cout << "Wallet Balance: Rs. " << w.walletBalance << endl;
        cout << "Wallet Status: " << w.walletStatus << endl;
    }
    void addMoney(DigitalWallet &w, float amount) {
        if (w.walletStatus == "Active") {
            w.walletBalance += amount;
            cout << "Rs. " << amount << " added successfully." << endl;
        } 
        else {
            cout << "Wallet is disabled." << endl;
        }
    }
    void deductMoney(DigitalWallet &w, float amount) {
        if (w.walletStatus != "Active") {
            cout << "Wallet is disabled." << endl;
        }
        else if (amount <= w.walletBalance) {
            w.walletBalance -= amount;
            cout << "Rs. " << amount << " deducted successfully." << endl;
        }
        else {
            cout << "Insufficient balance." << endl;
        }
    }
    void disableWallet(DigitalWallet &w) {
        w.walletStatus = "Disabled";
        cout << "Wallet has been disabled." << endl;
    }
    void displayStatus(DigitalWallet &w) {
        cout << "Current Wallet Status: " << w.walletStatus << endl;
    }
};

int main() {
    string name, status;
    float balance, amount;

    cout << "Enter user name: ";
    getline(cin, name);
    cout << "Enter wallet balance: ";
    cin >> balance;
    cout << "Enter wallet status (Active/Disabled): ";
    cin >> status;

    DigitalWallet wallet(name, balance, status);
    WalletManager manager;

    manager.displayDetails(wallet);

    cout << "\nEnter amount to add: ";
    cin >> amount;
    manager.addMoney(wallet, amount);
    cout << "Enter amount to deduct: ";
    cin >> amount;
    manager.deductMoney(wallet, amount);
    manager.disableWallet(wallet);
    manager.displayStatus(wallet);
    cout << "\nFinal Details:" << endl;
    manager.displayDetails(wallet);

    return 0;
}