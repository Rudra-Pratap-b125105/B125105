/*
Compare Two Digital Cameras – Friend Function
Create a class named Camera containing the following private data members:
• Brand
• Model
• Megapixels
• Storage Capacity
Create two Camera objects. Write a friend function named compareCamera() that determines 
which camera is better based on the following conditions:
1. The camera with higher megapixels is considered better.
2. If both cameras have the same megapixels, the camera with higher storage capacity
is considered better.
Display the details of the better camera.
*/

#include <iostream>
using namespace std;

class Camera {
private:
    string brand;
    string model;
    float megapixels;
    int storageCapacity;

public:
    Camera(string b, string m, float mp, int storage) {
        brand = b;
        model = m;
        megapixels = mp;
        storageCapacity = storage;
    }
    friend void compareCamera(Camera c1, Camera c2);
};

void compareCamera(Camera c1, Camera c2) {
    Camera better = c1;

    if (c2.megapixels > c1.megapixels ||
        (c2.megapixels == c1.megapixels &&
         c2.storageCapacity > c1.storageCapacity)) {
        better = c2;
    }
    cout << "\n--- Better Camera ---" << endl;
    cout << "Brand: " << better.brand << endl;
    cout << "Model: " << better.model << endl;
    cout << "Megapixels: " << better.megapixels << " MP" << endl;
    cout << "Storage Capacity: " << better.storageCapacity << " GB" << endl;
}

int main() {
    string brand, model;
    float mp;
    int storage;

    cout << "Enter details of Camera 1:\n";
    cout << "Brand: ";
    cin >> brand;
    cout << "Model: ";
    cin >> model;
    cout << "Megapixels: ";
    cin >> mp;
    cout << "Storage Capacity (GB): ";
    cin >> storage;

    Camera c1(brand, model, mp, storage);

    cout << "\nEnter details of Camera 2:\n";
    cout << "Brand: ";
    cin >> brand;
    cout << "Model: ";
    cin >> model;
    cout << "Megapixels: ";
    cin >> mp;
    cout << "Storage Capacity (GB): ";
    cin >> storage;

    Camera c2(brand, model, mp, storage);
    compareCamera(c1, c2);

    return 0;
}