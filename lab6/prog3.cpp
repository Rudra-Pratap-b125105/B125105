/*
Book Price Ranking
Create a class Book containing a book title and price. Overload the < operator to compare
two books by price.
If the prices are equal, the book with the lexicographically smaller title should be considered 
smaller. Return a Boolean result.
*/

#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    double price;
    public:
        Book(string t, double p) {
            title = t;
            price = p;
        }
        bool operator<(Book b) {
            if (price == b.price)
                return title < b.title;

            return price < b.price;
        }
        void display() {
            cout << title << " - Rs. " << price;
        }
};

int main() {
    Book b1("Algorithms", 450);
    Book b2("Data Structures", 450);
    Book b3("Operating Systems", 600);
    cout << "Book 1: ";
    b1.display();
    cout << "\nBook 2: ";
    b2.display();
    cout << "\nBook 3: ";
    b3.display();
    cout << "\n\nBook 1 < Book 2: "<< (b1 < b2 ? "True" : "False");
    cout << "\nBook 1 < Book 3: "<< (b1 < b3 ? "True" : "False");
    cout << endl;
    return 0;
}
