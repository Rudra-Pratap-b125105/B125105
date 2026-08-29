/*
Nearest Value
Create overloaded functions named nearValue() to determine:
• Which of two integers is closer to zero.
• Which of two floating-point values is closer to zero.
• Which element of an integer array is closest to zero.
Display the selected value in each case.
*/

#include <iostream>
#include <cmath>
using namespace std;

// Find integer closer to zero
int nearValue(int a, int b)
{
    if (abs(a) <= abs(b))
        return a;
    else
        return b;
}

// Find floating-point value closer to zero
float nearValue(float a, float b)
{
    if (fabs(a) <= fabs(b))
        return a;
    else
        return b;
}

// Find array element closest to zero
int nearValue(int arr[], int n)
{
    int nearest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (abs(arr[i]) < abs(nearest))
            nearest = arr[i];
    }

    return nearest;
}

int main()
{
    int a, b;
    float x, y;
    int n;
    int arr[100];

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Integer closer to zero = "
         << nearValue(a, b) << endl;

    cout << "\nEnter two floating-point values: ";
    cin >> x >> y;

    cout << "Floating-point value closer to zero = "<< nearValue(x, y) << endl;

    cout << "\nEnter size of integer array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Array element closest to zero = "<< nearValue(arr, n) << endl;

    return 0;
}