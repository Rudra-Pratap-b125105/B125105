/*
String Information
Create overloaded functions named information() to perform the following operations:
• Find the length of a character array.
• Count the occurrence of a specified character in a character array.
• Count the occurrence of a specified character within the first k positions of a character
array.
Display the result of each operation
*/

#include <iostream>
using namespace std;

// Find length of character array
int information(const char arr[])
{
    int length = 0;

    while (arr[length] != '\0')
        length++;

    return length;
}

// Count occurrence of a character
int information(const char arr[], char target)
{
    int count = 0;

    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == target)
            count++;
    }

    return count;
}

// Count occurrence within first k positions
int information(const char arr[], char target, int k)
{
    int count = 0;

    for (int i = 0; i < k && arr[i] != '\0'; i++)
    {
        if (arr[i] == target)
            count++;
    }

    return count;
}

int main()
{
    char str[100];
    char target;
    int k;

    cout << "Enter a string: ";
    cin >> str;

    cout << "Enter character to count: ";
    cin >> target;

    cout << "Enter number of positions to examine: ";
    cin >> k;

    cout << "\nLength of character array = "<< information(str) << endl;

    cout << "Total occurrence of '" << target << "' = "<< information(str, target) << endl;
    cout << "Occurrence of '" << target << "' in first " << k << " positions = "<< information(str, target, k) << endl;

    return 0;
}