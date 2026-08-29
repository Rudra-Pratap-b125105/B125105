/*
Swap Values
Create overloaded functions named swapData() to swap values in the following cases:
• Swap two integer values using references.
• Swap two floating-point values using references.
• Swap two integer values using pointers.
Display the values before and after swapping.
*/

#include <iostream>
using namespace std;

// Swap two integers using references
void swapData(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
// Swap two floating-point values using references
void swapData(float &a, float &b)
{
    float temp = a;
    a = b;
    b = temp;
}
// Swap two integers using pointers
void swapData(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    float x, y;
    int p, q;
    // Integer reference swap
    cout << "Enter two integers for reference swap: ";
    cin >> a >> b;
    cout << "Before swapping: " << a << " " << b << endl;
    swapData(a, b);
    cout << "After swapping:  " << a << " " << b << endl;
    // Float reference swap
    cout << "\nEnter two floating-point values: ";
    cin >> x >> y;
    cout << "Before swapping: " << x << " " << y << endl;
    swapData(x, y);
    cout << "After swapping:  " << x << " " << y << endl;
    // Integer pointer swap
    cout << "\nEnter two integers for pointer swap: ";
    cin >> p >> q;

    cout << "Before swapping: " << p << " " << q << endl;
    swapData(&p, &q);
    cout << "After swapping:  " << p << " " << q << endl;

    return 0;
}