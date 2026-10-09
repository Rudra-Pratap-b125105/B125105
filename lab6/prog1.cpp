
#include <iostream>
#include <cstdlib>
using namespace std;

class Fraction {
    int num, den;

    int gcd(int a, int b) {
        a = abs(a);
        b = abs(b);

        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }

        return a;
    }

    void simplify() {
        if (den < 0) {
            num = -num;
            den = -den;
        }

        int g = gcd(num, den);
        if (g != 0) {
            num /= g;
            den /= g;
        }
    }

public:
    Fraction(int n = 0, int d = 1) {
        num = n;
        den = (d == 0) ? 1 : d;
        simplify();
    }

    Fraction operator+(Fraction f) {
        return Fraction(num * f.den + f.num * den,
                        den * f.den);
    }

    Fraction operator-(Fraction f) {
        return Fraction(num * f.den - f.num * den,
                        den * f.den);
    }

    void display() {
        cout << num << "/" << den;
    }
};

int main() {
    Fraction f1(1, 2), f2(1, 3);

    cout << "First fraction: ";
    f1.display();

    cout << "\nSecond fraction: ";
    f2.display();

    Fraction sum = f1 + f2;
    Fraction diff = f1 - f2;

    cout << "\nSum: ";
    sum.display();

    cout << "\nDifference: ";
    diff.display();

    cout << endl;
    return 0;
}
