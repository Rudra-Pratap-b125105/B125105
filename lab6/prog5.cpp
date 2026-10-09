/*
Score Tracker – Prefix and Postfix Increment
Create a class Score containing an integer score. Overload both prefix and postfix ++
operators.
Demonstrate the difference between ++obj and obj++ by storing their results in separate
objects and displaying the values.
Hint: The postfix operator function uses a dummy int parameter to distinguish it from the prefix
version.
*/
#include <iostream>
using namespace std;

class Score {
    int score;
    public:
        Score(int s = 0) {
            score = s;
        }
        Score operator++() {
            ++score;
            return *this;
        }
        Score operator++(int) {
            Score temp = *this;
            score++;
            return temp;
        }
        void display() {
            cout << score;
        }
};

int main() {
    Score s1(10);
    cout << "Original score: ";
    s1.display();
    Score prefixResult = ++s1;
    cout << "\nPrefix result: ";
    prefixResult.display();
    cout << "\nScore after prefix: ";
    s1.display();
    Score s2(10);
    Score postfixResult = s2++;
    cout << "\n\nPostfix result: ";
    postfixResult.display();
    cout << "\nScore after postfix: ";
    s2.display();

    cout << endl;
    return 0;
}
