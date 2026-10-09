/*
Time Duration Calculator
Create a class Duration containing hours and minutes. Overload the binary + operator to
add two duration objects.
Normalize the result so that minutes are always less than 60. Return a new object and
display both the original durations and the resulting duration
*/
#include <iostream>
using namespace std;

class Duration {
    int hours, minutes;
    public:
        Duration(int h = 0, int m = 0) {
            hours = h + m / 60;
            minutes = m % 60;
        }
        Duration operator+(Duration d) {
            return Duration(hours + d.hours,minutes + d.minutes);
        }
        void display() {
            cout << hours << " hours " << minutes << " minutes";
        }
};

int main() {
    Duration d1(2, 45), d2(1, 30);
    cout << "First duration: ";
    d1.display();
    cout << "\nSecond duration: ";
    d2.display();
    Duration result = d1 + d2;
    cout << "\nTotal duration: ";
    result.display();
    cout << endl;
    return 0;
}
