// write a class book with attibbutes book id , title and price accept the data of 10 books display and then find the average price of the books


#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    int bookId;
    string title;
    float price; 

    // Function to accept book details
    void accept() {
        cout << "Enter Book ID: ";
        cin >> bookId;
        cin.ignore();  // to clear buffer

        cout << "Enter Book Title: ";
        getline(cin, title);

        cout << "Enter Book Price: ";
        cin >> price;
    }

    // Function to display book details
    void display() {
        cout << "\nBook ID    : " << bookId;
        cout << "\nTitle      : " << title;
        cout << "\nPrice      : " << price << endl;
    }
};

int main() {
    Book b[10];
    float total = 0, avg;

    // Accept details of 10 books
    for (int i = 0; i < 10; i++) {
        cout << "\nEnter details of Book " << i + 1 << endl;
        b[i].accept();
        total += b[i].price;
    }

    // Display details of 10 books
    cout << "\n\n--- Book Details ---";
    for (int i = 0; i < 10; i++) {
        b[i].display();
    }

    // Calculate average price
    avg = total / 10;

    cout << "\n\nAverage Price of Books = " << avg << endl;

    return 0;
}
