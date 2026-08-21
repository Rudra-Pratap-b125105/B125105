/*
Weather Report – Friend Function
Create a class named Weather containing the following private data members:
• City Name
• Temperature
• Weather Condition
Write a friend function named generateReport() that accesses the private members and
displays a suitable weather report.
The function should classify the temperature as follows:
• Above 35◦C – Very Hot
• 20◦C to 35◦C – Pleasant
• Below 20◦C – Cool
*/

#include <iostream>
using namespace std;

class Weather {
private:
    string cityName;
    float temperature;
    string weatherCondition;

public:
    Weather(string city, float temp, string condition="") {
        cityName = city;
        temperature = temp;
        weatherCondition = condition;
    }
    friend void generateReport(Weather w);
};

void generateReport(Weather w) {
    cout << "\nWeather Report: " << endl;
    cout << "City: " << w.cityName << endl;
    cout << "Temperature: " << w.temperature << " C" << endl;
    //cout << "Condition: " << w.weatherCondition << endl;

    if (w.temperature > 35)
        w.weatherCondition= "Very Hot";
    else if (w.temperature >= 20)
        w.weatherCondition= "Pleasure";
    else
        w.weatherCondition= "Cool";
    
    cout << "Condition: " << w.weatherCondition << endl;
}

int main() {
    string city, condition;
    float temp;
    cout << "Enter city name: ";
    getline(cin, city);
    cout << "Enter temperature: ";
    cin >> temp;
    cin.ignore();
    // cout << "Enter weather condition: ";
    // getline(cin, condition);
    Weather w(city, temp);
    generateReport(w);

    return 0;
}