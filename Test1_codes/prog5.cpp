/*
E-Wallet Transaction Record
Create a class Wallet containing wallet ID, current balance, and a dynamically allocated
array of transaction amounts.
Implement overloaded transaction() functions: one accepts an amount and performs
a deposit or withdrawal depending on its sign, while another accepts an amount and a
transaction type character (’D’ or ’W’).
Write a friend function that receives two wallets and determines which has the larger
balance without using a public getter for the balance. Create the wallets dynamically and
release the memory correctly.
*/
#include <iostream>
using namespace std;

class Wallet {
    int walletID;
    double balance;
    double *transactions;
    int transactionCount;
public:
    Wallet(int id, double b, int n) {
        walletID = id;
        balance = b;
        transactionCount = 0;
        transactions = new double[n];
    }
    void transaction(double amount) {
        if (amount >= 0) {
            balance += amount;
            transactions[transactionCount++] = amount;
        } else {
            if (balance + amount >= 0) {
                balance += amount;
                transactions[transactionCount++] = amount;
            } 
            else {
                cout << "Insufficient balance.\n";
            }
        }
    }
    void transaction(double amount, char type) {
        if (type == 'D' || type == 'd') {
            balance += amount;
            transactions[transactionCount++] = amount;
        } 
        else if (type == 'W' || type == 'w') {
            if (balance >= amount) {
                balance -= amount;
                transactions[transactionCount++] = -amount;
            } 
            else {
                cout << "Insufficient balance.\n";
            }
        } 
        else {
            cout << "Invalid transaction type.\n";
        }
    }
    void display() {
        cout << "Wallet ID: " << walletID << endl;
        cout << "Current Balance: " << balance << endl;
        cout << "Transactions: ";
        for (int i = 0; i < transactionCount; i++)
            cout << transactions[i] << " ";
        cout << endl;
    }
    friend void compareWallets(Wallet, Wallet);
    ~Wallet() {
        delete[] transactions;
    }
};

void compareWallets(Wallet w1, Wallet w2) {
    if (w1.balance > w2.balance)
        cout << "Wallet " << w1.walletID << " has the larger balance.\n";
    else if (w2.balance > w1.balance)
        cout << "Wallet " << w2.walletID << " has the larger balance.\n";
    else
        cout << "Both wallets have the same balance.\n";
}
int main() {
    int n;
    cout << "Enter number of transactions for each wallet: ";
    cin >> n;
    Wallet *wallets = new Wallet[2]{
        Wallet(101, 1500, n),
        Wallet(102, 2500, n)
    };
    double amount;
    char type;
    cout << "\nWallet 1\n";
    cout << "Enter amount for first transaction ";
    cin >> amount;
    wallets[0].transaction(amount);
    cout << "Enter transaction amount and type (D/W): ";
    cin >> amount >> type;
    wallets[0].transaction(amount, type);

    cout << "\n Wallet 2\n";
    cout << "Enter amount for first transaction ";
    cin >> amount;
    wallets[1].transaction(amount);
    cout << "Enter transaction amount and type (D/W): ";
    cin >> amount >> type;
    wallets[1].transaction(amount, type);

    cout << "\nWallet Details\n";
    wallets[0].display();
    cout << endl;
    wallets[1].display();
    cout << "\nBalance Comparison\n";
    compareWallets(wallets[0], wallets[1]);
    delete[] wallets;
    return 0;
}