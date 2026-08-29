/*
Area Calculator
Create overloaded functions named area() to calculate:
• the area of a square,
• the area of a rectangle,
• the area of a circle.
Accept the required dimensions from the user and display the area calculated by each
overloaded function.
Hint: Use the number of parameters to distinguish the functions for different shapes.
*/

#include <iostream>
using namespace std;

// Area of square
int area(int side)
{
    return side * side;
}

// Area of rectangle
int area(int length, int width)
{
    return length * width;
}

// Area of circle
double area(double radius)
{
    return 3.14159 * radius * radius;
}

int main()
{
    int side, length, width;
    double radius;

    cout << "Enter side of square: ";
    cin >> side;
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;
    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "\nAreas:\n";

    cout << "Area of square = "
         << area(side) << endl;

    cout << "Area of rectangle = "
         << area(length, width) << endl;

    cout << "Area of circle = "
         << area(radius) << endl;

    return 0;
}