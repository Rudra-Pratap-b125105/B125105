/*
Update Array Elements
Create overloaded functions named update() to perform the following:
• Increase an integer variable by a specified amount.
• Increase a floating-point variable by a specified amount.
• Increase every element of an integer array by a specified amount.
Display the values before and after the update.
*/

#include <iostream>
using namespace std;

// Increase an integer variable
void update(int &x, int amount)
{
    x += amount;
}

// Increase a floating-point variable
void update(float &x, float amount)
{
    x += amount;
}

// Increase every element of an integer array
void update(int arr[], int n, int amount)
{
    for (int i = 0; i < n; i++)
        arr[i] += amount;
}

int main()
{
    int num;
    float value;
    int amount;
    float floatAmount;

    int n;
    int arr[100];

    cout << "Enter an integer: ";
    cin >> num;

    cout << "Enter amount to increase integer by: ";
    cin >> amount;

    cout << "Before update: " << num << endl;
    update(num, amount);
    cout << "After update:  " << num << endl;

    cout << "\nEnter a floating-point value: ";
    cin >> value;

    cout << "Enter amount to increase floating-point value by: ";
    cin >> floatAmount;

    cout << "Before update: " << value << endl;
    update(value, floatAmount);
    cout << "After update:  " << value << endl;

    cout << "\nEnter size of integer array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter amount to add to every element: ";
    cin >> amount;

    cout << "Before update: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    update(arr, n, amount);

    cout << "\nAfter update:  ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    return 0;
}