/*
Date Equality and Inequality
Create a class Date containing day, month, and year. Overload the == and != operators.
Two date objects are equal only if their day, month, and year are all equal. Display the
results of both comparisons.
*/

#include <iostream>
using namespace std;

class Date {
    int day, month, year;
public:
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }
    bool operator==(Date d) {
        return day == d.day && month == d.month && year == d.year;
    }
    bool operator!=(Date d) {
        return !(*this == d);
    }
    void display() {
        cout << day << "/" << month << "/" << year;
    }
};

int main() {
    Date d1(9, 10, 2026);
    Date d2(9, 10, 2026);
    Date d3(10, 10, 2026);
    cout << "Date 1: ";
    d1.display();
    cout << "\nDate 2: ";
    d2.display();
    cout << "\nDate 3: ";
    d3.display();
    cout << "\n\nDate 1 == Date 2: "<< (d1 == d2 ? "True" : "False");
    cout << "\nDate 1 != Date 3: "<< (d1 != d3 ? "True" : "False");
    cout << endl;
    return 0;
}
