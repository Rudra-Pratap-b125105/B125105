/*
Matrix Addition
Create a class Matrix representing a 2 × 2 matrix. Overload the binary + operator to add
two matrix objects elementwise and return a new matrix.
Display both original matrices and the resulting matrix. Ensure that the original objects
remain unchanged.
*/


#include <iostream>
using namespace std;

class Matrix {
    int a[2][2];
public:
    Matrix(int x = 0) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                a[i][j] = x;
            }
        }
    }
    void input() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> a[i][j];
            }
        }
    }
    Matrix operator+(Matrix m) {
        Matrix result;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                result.a[i][j] = a[i][j] + m.a[i][j];
            }
        }
        return result;
    }

    void display() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix m1, m2;
    cout << "Enter elements of first 2x2 matrix:\n";
    m1.input();
    cout << "Enter elements of second 2x2 matrix:\n";
    m2.input();
    Matrix sum = m1 + m2;
    cout << "\nFirst matrix:\n";
    m1.display();
    cout << "\nSecond matrix:\n";
    m2.display();
    cout << "\nSum matrix:\n";
    sum.display();

    return 0;
}
