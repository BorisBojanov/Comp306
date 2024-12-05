/*
title: Problem5.cpp
description: Display the sorted Book list after the first output list. 
author: Boris Bojanov
version: 1.0
copyright: Boris Bojanov 2024

DOCUMENTATION
Program Purpose:
Define a class called Book. 
The Book class should store attributes such as the title, ISBN, author, edition, publisher, and year of publication. 
These attributes must be private.

Provide public get/set methods in this class to access these attributes. 
Test your Book class by creating several books and displaying the attributes. 

Define a class called Bookshelf, which contains only a main() method. 
The Bookshelf class must create a dozen (12) Book objects with distinct attributes, and it must store them in an ArrayList of Books.

The Bookshelf class must then list all the attributes of all books in the ArrayList in the order they were entered into the ArrayList.

Create a sort function for Bookshelf, which will sort books in the ArrayList in ascending order by name, and then by year of publication.

HINT
You will need to define a comparator class that takes two Book objects as parameters of the compareTo method. This method should make a two-step comparison and return a Boolean value. The first comparison should compare the book names. If the names are the same, the second comparison should compare the years of publication.

Add code to main() to display the sorted Book list after the first output list—that is, Books in the order they were entered into the ArrayList.

Compile: g++ -std=c++17 Problem5.cpp Book.cpp BookShelf.cpp Comparator.cpp -o Problem5
Execution: ./Problem5

Classes:
Book - class for creating Book objects
BookShelf - class for creating BookShelf object

Variables:

Methods:
Sort - void - sort books in the ArrayList in ascending order by name, and then by year of publication

TEST PLAN
Normal case:
*/

#include <iostream>
#include <compare>
#include "Book.h"
#include "BookShelf.h"
#include "Comparator.h"

using namespace std;

vector<Book> bookList;
vector<Book> sortedBookList;

// Create a sort function for Bookshelf, 
// which will sort books in the ArrayList in ascending order by name, 
// and then by year of publication
void Sort(vector<Book>& bookList) {
    Comparator comparator;
    std::sort(bookList.begin(), bookList.end(), [&comparator](const Book& book1, const Book& book2) {
        return comparator.compareTo(book1, book2);
    });
}

// Function to display the books
void displayBooks(const vector<Book>& books) {
    Book book;
    for (int i = 0; i < books.size(); i++) {
        book = books[i];
        cout << "Title: " << book.getTitle() 
             << ", ISBN: " << book.getISBN()
             << ", Author: " << book.getAuthor()
             << ", Edition: " << book.getEdition()
             << ", Publisher: " << book.getPublisher()
             << ", Year: " << book.getYearOfPublication() << endl;
    }
}

int main(){
    // Create a BookShelf object
    BookShelf bookShelf;

    // Get the list of books
    vector<Book> bookList = bookShelf.main();

    // Display the books in the order they were entered
    cout << "Books in original order:" << endl;
    displayBooks(bookList);

    // Sort the books
    Sort(bookList);

    // Display the sorted books
    cout << "\nBooks in sorted order:" << endl;
    displayBooks(bookList);

    return 0;
}
