/*
title: BookShelf.cpp
description: Contains only a main() method
author: Boris Bojanov
version: 1.0
copyright: Boris Bojanov 2024

DOCUMENTATION
Program Purpose:
The class should have a main method that creates a dozen (12) Book objects with distinct attributes and stores them in an ArrayList of Books.

Compile: This file is to be included in Problem5.cpp

Classes:
BookShelf - class for creating BookShelf objects
Book - class for creating Book objects

Variables:
bookList - vector<Book> - ArrayList of Books

Methods:
main - vector<Book> - create a dozen (12) Book objects with distinct attributes and add them to the ArrayList of Books

TEST PLAN
Normal case:
Make sure the BookShelf class is implemented correctly by calling the main method outside of the class.
*/

#include "BookShelf.h"

vector<Book> BookShelf:: main() {
        // Create an ArrayList of Books
        vector<Book> bookList;

        // Create a dozen (12) Book objects with distinct attributes and add them to the ArrayList of Books
        bookList.push_back(Book("The Great Gatsby", "9780743273565", "F. Scott Fitzgerald", "1st", "Scribner", "1925"));
        bookList.push_back(Book("To Kill a Mockingbird", "9780061120084", "Harper Lee", "1st", "J.B. Lippincott & Co.", "1960"));
        bookList.push_back(Book("1984", "9780451524935", "George Orwell", "1st", "Secker & Warburg", "1949"));
        bookList.push_back(Book("Animal Farm", "9780451526342", "George Orwell", "1st", "Secker & Warburg", "1945"));
        bookList.push_back(Book("Brave New World", "9780060850524", "Aldous Huxley", "1st", "Chatto & Windus", "1932"));
        bookList.push_back(Book("The Catcher in the Rye", "9780316769488", "J.D. Salinger", "1st", "Little, Brown and Company", "1951"));
        bookList.push_back(Book("Lord of the Flies", "9780571200568", "William Golding", "1st", "Faber and Faber", "1954"));
        bookList.push_back(Book("The Grapes of Wrath", "9780143039433", "John Steinbeck", "1st", "The Viking Press", "1939"));
        bookList.push_back(Book("1984", "9781503280786", "Herman Melville", "1st", "Secker & Warburg", "1851"));
        bookList.push_back(Book("Pride and Prejudice", "9780141439518", "Jane Austen", "1st", "T. Egerton", "1813"));
        bookList.push_back(Book("The Catcher in the Rye (REMIX)", "9780007458424", "J.R.R. Tolkien", "1st", "George Allen & Unwin", "1937"));
        bookList.push_back(Book("War and Peace", "9780199232765", "Leo Tolstoy", "1st", "The Russian Messenger", "1869"));

        return bookList;
    }  