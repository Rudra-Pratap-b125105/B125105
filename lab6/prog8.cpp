/*
Temperature Comparison
Create a class Temperature containing a Celsius value. Overload the > and < operators to
compare two temperature objects.
Additionally, overload the unary- operator to return a new object with the negated
temperature value.
Demonstrate all three operations.
*/
#include <iostream>
using namespace std;

class Temperature {
    double celsius;

    public:
        Temperature(double c = 0) {
            celsius = c;
        }
        bool operator>(Temperature t) {
            return celsius > t.celsius;
        }
        bool operator<(Temperature t) {
            return celsius < t.celsius;
        }
        Temperature operator-() {
            return Temperature(-celsius);
        }
        void display() {
            cout << celsius << " degrees Celsius";
        }
};

int main() {
    Temperature t1(35), t2(20);
    cout << "Temperature 1: ";
    t1.display();
    cout << "\nTemperature 2: ";
    t2.display();
    cout << "\n\nTemperature 1 > Temperature 2: " << (t1 > t2 ? "True" : "False");
    cout << "\nTemperature 1 < Temperature 2: " << (t1 < t2 ? "True" : "False");
    Temperature t3 = -t1;
    cout << "\nNegated temperature 1: ";
    t3.display();
    cout << "\nOriginal temperature 1: ";
    t1.display();
    cout << endl;
    return 0;
}
