/*
Movie Queue Display
A cinema maintains a waiting queue whose size is entered by the user. Create a class
QueueDisplay containing the queue size and a dynamically allocated array of customer
IDs
Provide functions to insert IDs and display them. Write a friend function that receives
two QueueDisplay objects and exchanges their complete queue information. Create an
array of objects dynamically and release the allocated memory correctly.
*/

#include <iostream>
#include <utility>

using namespace std;

class QueueDisplay{
    int size;
    int *customerIDs;
    public:
    QueueDisplay(int s = 0) {
        size = s;
        if (size > 0)
            customerIDs = new int[size];
        else
            customerIDs = nullptr;
    }
    void insert(int position, int id) {
        if (position >= 0 && position < size)
            customerIDs[position] = id;
        else
            cout << "Invalid position.\n";
    }
    void display() {
        cout << "Queue Size: " << size << endl;
        cout << "Customer IDs: ";
        for (int i = 0; i < size; i++)
            cout << customerIDs[i] << " ";
        cout << endl;
    }
    friend void exchangeQueues(QueueDisplay &, QueueDisplay &);
    ~QueueDisplay() {
        delete[] customerIDs;
    }
};
void exchangeQueues(QueueDisplay &q1, QueueDisplay &q2) {
    swap(q1.size, q2.size);
    swap(q1.customerIDs, q2.customerIDs);
}
int main(){
    int n;
    cout << "Enter number of queues: ";
    cin >> n;
    QueueDisplay *queues = new QueueDisplay[n];
    for (int i = 0; i < n; i++) {
        int size;
        cout << "\nEnter size of Queue " << i + 1 << ": ";
        cin >> size;
        queues[i] = QueueDisplay(size);
        for (int j = 0; j < size; j++) {
            int id;
            cout << "Enter customer ID " << j + 1 << ": ";
            cin >> id;
            queues[i].insert(j, id);
        }
    }
    delete[] queues;
    return 0;
}