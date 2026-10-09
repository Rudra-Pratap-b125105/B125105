/*
Inventory Combination
Create a class InventoryItem containing product ID, unit price, and quantity.
Overload the binary + operator to combine two objects only if their product IDs and unit
prices match. The resulting object should contain the combined quantity.
If the objects are incompatible, report the situation clearly. Do not modify either original
object.
*/
#include <iostream>
using namespace std;

class InventoryItem {
    int productID;
    double unitPrice;
    int quantity;
public:
    InventoryItem(int id = 0, double price = 0, int qty = 0) {
        productID = id;
        unitPrice = price;
        quantity = qty;
    }
    InventoryItem operator+(InventoryItem item) {
        if (productID == item.productID && unitPrice == item.unitPrice) {
            return InventoryItem(productID, unitPrice, quantity + item.quantity);
        }
        cout << "Error: Incompatible inventory items.\n";
        return InventoryItem();
    }
    void display() {
        cout << "Product ID: " << productID << ", Unit Price: Rs. " << unitPrice << ", Quantity: " << quantity << endl;
    }
};

int main() {
    InventoryItem i1(101, 50, 10);
    InventoryItem i2(101, 50, 15);
    InventoryItem i3(102, 60, 5);
    cout << "Item 1: ";
    i1.display();
    cout << "Item 2: ";
    i2.display();
    InventoryItem combined = i1 + i2;
    cout << "\nCombined inventory:\n";
    combined.display();
    cout << "\nAttempting incompatible combination:\n";
    InventoryItem invalid = i1 + i3;
    cout << "\nOriginal items after operations:\n";
    i1.display();
    i2.display();

    return 0;
}
