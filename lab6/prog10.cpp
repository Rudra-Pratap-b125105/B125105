/*
Shopping Bill Operations
Create a class Bill containing the number of items and the total bill amount.
Overload the binary + operator to combine two bills by adding their item counts and total
amounts. Also overload the > operator to compare two bills by their total amount.
Display the combined bill and the result of comparing the two original bills.
*/

#include <iostream>
using namespace std;

class Bill {
    int items;
    double amount;
    public:
        Bill(int n=0, double a=0){
            items =n;
            amount= a;
        }
        Bill operator+(Bill b){
            return (b.items +items , b.amount + amount);
        }
        bool operator>(Bill b){
            return (amount > b.amount);
        }
        void display() {
            cout << "Number of items: " << items << "\nTotal amount: Rs. " << amount << endl;
        }
};

int main (){
    Bill b1(3,700), b2(5,800);
    cout << "First bill:\n";
    b1.display();
    cout << "\nSecond bill:\n";
    b2.display();
    cout << "\nFirst bill > Second bill: " << (b1 > b2 ? "True" : "False") << endl;
    Bill combined = b1+b2;
    cout << "\nCombined bill:\n";
    combined.display();
    return 0;
}