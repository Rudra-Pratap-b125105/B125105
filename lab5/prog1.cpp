/*
Distance Converter
Create overloaded functions named convert() to perform the following conversions:
• Convert a distance given in kilometers into meters.
• Convert a distance given in meters into centimeters.
• Convert a floating-point distance given in kilometers into meters.
Demonstrate all overloaded versions from the main() function and display the converted
values.
Hint: Use different parameter types or parameter lists so that the compiler can distinguish the
overloaded functions.
*/

#include <iostream>
using namespace std;

// Kilometers to meters
int convert(int km){
    return km * 1000;
}

// Meters to centimeters
long convert(long meters)
{
    return meters * 100;
}

// Floating-point kilometers to meters
float convert(float km)
{
    return km * 1000.0f;
}

int main()
{
    int km;
    long meters;
    float decimalKm;

    cout << "Enter distance in kilometers (integer): ";
    cin >> km;
    cout << "Enter distance in meters: ";
    cin >> meters;
    cout << "Enter distance in kilometers (decimal): ";
    cin >> decimalKm;
    cout << "\nConverted Values:\n";
    cout << km << " km = "
         << convert(km) << " meters" << endl;

    cout << meters << " meters = "
         << convert(meters) << " centimeters" << endl;

    cout << decimalKm << " km = "
         << convert(decimalKm) << " meters" << endl;

    return 0;
}