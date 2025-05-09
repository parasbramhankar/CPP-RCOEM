#include <iostream>
#include <string>
using namespace std;
struct Book {
    string title;
    string author;
    int year;
};
void displayBookInfo(const Book& book) {
    cout << "Title: " << book.title << "\n";
    cout << "Author: " << book.author << "\n";
    cout << "Year: " << book.year << "\n";
}
int main() {
    Book myBook;
    cout << "Enter book title: ";
    cin >> myBook.title;
    cout << "Enter author: ";
    cin >> myBook.author;
    cout << "Enter publication year: ";
    cin >> myBook.year;
    displayBookInfo(myBook);
    return 0;
}
