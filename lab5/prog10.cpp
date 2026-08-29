/*
Result Evaluator
Create overloaded functions named evaluate() to perform the following operations:
• Calculate the average of two integers.
• Calculate the average of three integers.
• Calculate the average of two floating-point values.
• Calculate the average of all elements of an integer array.
• Calculate the average of two integer values accessed through pointers.
Accept the required inputs and display the result produced by each overloaded function.
*/

#include <iostream>
using namespace std;

// Average of two integers
double evaluate(int a, int b)
{
    return (a + b) / 2.0;
}

// Average of three integers
double evaluate(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

// Average of two floating-point values
double evaluate(float a, float b)
{
    return (a + b) / 2.0;
}

// Average of all elements of an integer array
double evaluate(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    return (double)sum / n;
}

// Average of two integers accessed through pointers
double evaluate(int *a, int *b)
{
    return (*a + *b) / 2.0;
}

int main()
{
    int a, b, c;
    float x, y;

    int n;
    int arr[100];

    int p, q;

    // Average of two integers
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Average of two integers = "<< evaluate(a, b) << endl;

    // Average of three integers
    cout << "\nEnter three integers: ";
    cin >> a >> b >> c;

    cout << "Average of three integers = "<< evaluate(a, b, c) << endl;

    // Average of two floating-point values
    cout << "\nEnter two floating-point values: ";
    cin >> x >> y;

    cout << "Average of two floating-point values = "<< evaluate(x, y) << endl;

    // Average of integer array
    cout << "\nEnter size of integer array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Average of array elements = "<< evaluate(arr, n) << endl;

    // Average using pointers
    cout << "\nEnter two integers for pointer evaluation: ";
    cin >> p >> q;

    cout << "Average using pointers = " << evaluate(&p, &q) << endl;

    return 0;
}