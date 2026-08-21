/*
 Vehicle Service Tracker – Friend Class
Create two classes named VehicleService and ServiceManager.
The VehicleService class should contain the following private data members:
• Vehicle Number
• Owner Name
• Service Due Status
• Last Service Kilometres
Declare ServiceManager as a friend class of VehicleService.
The ServiceManager class should provide member functions to:
1. Display vehicle service information.
2. Mark the service as completed.
3. Update the last service kilometres.
4. Check whether the vehicle requires servicing.
*/

#include <iostream>
using namespace std;

class ServiceManager;

class VehicleService {
private:
    string vehicleNumber;
    string ownerName;
    string serviceDueStatus;
    int lastServiceKilometres;

public:
    VehicleService(string number, string owner, string status, int km) {
        vehicleNumber = number;
        ownerName = owner;
        serviceDueStatus = status;
        lastServiceKilometres = km;
    }
    friend class ServiceManager;
};

class ServiceManager {
public:
    void displayInfo(VehicleService &v) {
        cout << "\nVehicle Service Information: " << endl;
        cout << "Vehicle Number: " << v.vehicleNumber << endl;
        cout << "Owner Name: " << v.ownerName << endl;
        cout << "Service Due Status: " << v.serviceDueStatus << endl;
        cout << "Last Service Kilometres: " << v.lastServiceKilometres << " km" << endl;
    }

    void markServiceCompleted(VehicleService &v) {
        v.serviceDueStatus = "Completed";
        cout << "Service marked as completed." << endl;
    }

    void updateKilometres(VehicleService &v, int km) {
        v.lastServiceKilometres = km;
        cout << "Last service kilometres updated." << endl;
    }

    void checkService(VehicleService &v) {
        // Assuming servicing is required after 10,000 km
        if (v.serviceDueStatus == "Due" || v.lastServiceKilometres >= 10000) {
            cout << "Vehicle requires servicing." << endl;
        } else {
            cout << "Vehicle does not require servicing." << endl;
        }
    }
};

int main() {
    string number, owner, status;
    int km;

    cout << "Enter vehicle number: ";
    cin >> number;
    cout << "Enter owner name: ";
    cin >> owner;
    cout << "Enter service due status (Due/Completed): ";
    cin >> status;
    cout << "Enter last service kilometres: ";
    cin >> km;

    VehicleService v(number, owner, status, km);
    ServiceManager manager;

    manager.displayInfo(v);
    manager.checkService(v);
    manager.markServiceCompleted(v);
    manager.updateKilometres(v, 5000);
    cout << "\nAfter Operations:" << endl;
    manager.displayInfo(v);
    manager.checkService(v);

    return 0;
}