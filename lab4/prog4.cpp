/*
Electricity Usage Alert – Friend Function
Create a class named ElectricMeter containing the following private data members:
• Meter Number
• Consumer Name
• Units Consumed
Write a friend function named checkUsage() that accesses the private members and
categorizes electricity usage as follows:
• Below 100 units – Low Usage
• 100 to 300 units – Moderate Usage
• Above 300 units – High Usage
Display the consumer details and the corresponding usage category.
*/

#include <iostream>
using namespace std;

class ElectricMeter {
private:
    string meterNumber;
    string consumerName;
    float unitsConsumed;

public:
    ElectricMeter(string number, string name, float units) {
        meterNumber = number;
        consumerName = name;
        unitsConsumed = units;
    }

    friend void checkUsage(ElectricMeter e);
};

void checkUsage(ElectricMeter e) {
    cout << "\nElectricity Usage Report: " << endl;
    cout << "Meter Number: " << e.meterNumber << endl;
    cout << "Consumer Name: " << e.consumerName << endl;
    cout << "Units Consumed: " << e.unitsConsumed << endl;

    if (e.unitsConsumed < 100)
        cout << "Usage Category: Low Usage" << endl;
    else if (e.unitsConsumed <= 300)
        cout << "Usage Category: Moderate Usage" << endl;
    else
        cout << "Usage Category: High Usage" << endl;
}

int main() {
    string meterNumber, consumerName;
    float units;

    cout << "Enter Meter Number: ";
    cin >> meterNumber;
    cout << "Enter Consumer Name: ";
    cin >> consumerName;
    cout << "Enter Units Consumed: ";
    cin >> units;

    ElectricMeter e(meterNumber, consumerName, units);
    checkUsage(e);

    return 0;
}