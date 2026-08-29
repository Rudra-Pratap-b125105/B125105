/*
Data Inspection Using Pointers
Create overloaded functions named inspect() to:
• Display the value of an integer variable.
• Display the value stored at an integer pointer.
• Display all elements of an integer array using a pointer and its size.
Demonstrate all overloaded functions from main().
*/

#include <iostream>
using namespace std;

// Display value of an integer variable
void inspect(int value)
{
    cout << "Value of integer variable = "
         << value << endl;
}

// Display value stored at an integer pointer
void inspect(int *ptr)
{
    cout << "Value stored at pointer = "
         << *ptr << endl;
}

// Display array elements using pointer
void inspect(int *ptr, int n)
{
    cout << "Array elements: ";

    for (int i = 0; i < n; i++)
        cout << *(ptr + i) << " ";

    cout << endl;
}

int main()
{
    int value;
    int n;
    int arr[100];

    cout << "Enter an integer: ";
    cin >> value;

    inspect(value);

    cout << "\nEnter another integer for pointer inspection: ";
    int number;
    cin >> number;

    int *ptr = &number;
    inspect(ptr);

    cout << "\nEnter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    inspect(arr, n);

    return 0;
}