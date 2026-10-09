/*
Unary Operator – Account Adjustment
Create a class AccountBalance containing a balance. Overload the unary- operator to
return a new object whose balance is the negative of the original balance.
Display both objects and verify that the original balance remains unchanged.
*/
#include <iostream>
using namespace std;

class AccountBalance {
    double balance;
    public:
        AccountBalance(double b = 0) {
            balance = b;
        }
        AccountBalance operator-() {
            return AccountBalance(-balance);
        }
        void display() {
            cout << "Balance: Rs. " << balance;
        }
};

int main() {
    AccountBalance a1(5000);
    cout << "Original account: ";
    a1.display();
    AccountBalance a2 = -a1;
    cout << "\nNegated account: ";
    a2.display();
    cout << "\nOriginal account after operation: ";
    a1.display();
    cout << endl;
    return 0;
}
