/*
Array Processing
Create overloaded functions named process() to perform the following:
• Calculate the sum of all elements of an integer array.
• Calculate the sum of all elements of a floating-point array.
• Calculate the sum of only the first k elements of an integer array.
Accept the arrays and required values from the user and display the calculated sums.
*/

#include <iostream>
using namespace std;

// Sum of integer array
int process(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    return sum;
}

// Sum of floating-point array
float process(float arr[], int n)
{
    float sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    return sum;
}

// Sum of first k elements of integer array
int process(int arr[], int n, int k)
{
    int sum = 0;

    for (int i = 0; i < k; i++)
        sum += arr[i];

    return sum;
}

int main()
{
    int n, k;
    int intArr[100];
    float floatArr[100];

    cout << "Enter size of integer array: ";
    cin >> n;

    cout << "Enter integer array elements: ";
    for (int i = 0; i < n; i++)
        cin >> intArr[i];

    cout << "\nEnter size of floating-point array: ";
    int m;
    cin >> m;

    cout << "Enter floating-point array elements: ";
    for (int i = 0; i < m; i++)
        cin >> floatArr[i];

    cout << "\nEnter k (number of integer elements to sum): ";
    cin >> k;
    cout << "\nSum of integer array = "<< process(intArr, n) << endl;
    cout << "Sum of floating-point array = "<< process(floatArr, m) << endl;
    cout << "Sum of first " << k << " integer elements = " << process(intArr, n, k) << endl;

    return 0;
}