/*
Character Analyzer
Create overloaded functions named check() to perform the following operations:
• Determine whether an integer is positive, negative, or zero.
• Determine whether a character is an uppercase or lowercase letter.
• Search for a specified character in a character array.
Display the result of each operation.
*/

#include <iostream>
using namespace std;

// Check whether an integer is positive, negative, or zero
void check(int n)
{
    if (n > 0)
        cout << "The integer is positive." << endl;
    else if (n < 0)
        cout << "The integer is negative." << endl;
    else
        cout << "The integer is zero." << endl;
}

// Check whether a character is uppercase or lowercase
void check(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        cout << "The character is uppercase." << endl;
    else if (ch >= 'a' && ch <= 'z')
        cout << "The character is lowercase." << endl;
    else
        cout << "The character is neither uppercase nor lowercase." << endl;
}

// Search for a character in a character array
void check(const char arr[], int size, char target)
{
    bool found = false;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Character '" << target << "' is present in the array." << endl;
    else
        cout << "Character '" << target << "' is not present in the array." << endl;
}

int main()
{
    int num;
    char ch;
    int size;
    char arr[100];
    char target;
    cout << "Enter an integer: ";
    cin >> num;
    check(num);
    cout << "\nEnter a character: ";
    cin >> ch;
    check(ch);
    cout << "\nEnter size of character array: ";
    cin >> size;
    cout << "Enter " << size << " characters: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Enter character to search: ";
    cin >> target;
    check(arr, size, target);

    return 0;
}