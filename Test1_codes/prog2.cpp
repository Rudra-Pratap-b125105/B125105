/*
Drone Battery Monitor
Create a class Drone containing drone ID, battery percentage, and flight hours. Implement
overloaded update() functions: one updates only the battery percentage, while the other
updates both battery percentage and flight hours.
Write a friend function compareBattery() that receives two Drone objects and reports
which drone has the higher battery level. Create the drones dynamically and access them
using pointers.
 */

#include <iostream>
using namespace std;

class Drone {
    int droneID;
    float battery;
    float flightHours;

public:
    Drone(int id = 0, float b = 0, float h = 0){
        droneID = id;
        battery = b;
        flightHours = h;
    }
    void update(float b) {
        battery = b;
    }
    void update(float b, float h){
        battery = b;
        flightHours = h;
    }
    void display(){
        cout << "Drone ID: " << droneID << endl;
        cout << "Battery: " << battery << "%" << endl;
        cout << "Flight Hours: " << flightHours << endl;
    }
    friend void compareBattery(Drone, Drone);
};
void compareBattery(Drone d1, Drone d2){
    if (d1.battery > d2.battery)
        cout << "Drone " << d1.droneID << " has higher battery.\n";
    else if (d2.battery > d1.battery)
        cout << "Drone " << d2.droneID << " has higher battery.\n";
    else
        cout << "Both drones have the same battery level.\n";
}
int main(){
    Drone *drones = new Drone[2];
    int id;
    float battery, hours;
    for (int i = 0; i < 2; i++) {
        cout << "\nEnter Drone ID: ";
        cin >> id;
        cout << "Enter battery percentage: ";
        cin >> battery;
        cout << "Enter flight hours: ";
        cin >> hours;
        drones[i] = Drone(id, battery, hours);
    }
    for (int i = 0; i < 2; i++) {
        drones[i].display();
        cout << endl;
    }
    cout << "Updating Drone 1 battery:\n";
    cout << "Enter new battery: ";
    cin >> battery;
    drones[0].update(battery);
    for (int i=0;i<2; i++){
        drones[i].display();
        cout << endl;
    }
    cout << "Comparing Batteries:\n";
    compareBattery(drones[0], drones[1]);
    delete[] drones;
    return 0;
}