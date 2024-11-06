/*
    Title: Book.cpp
    Description: Implementation of the Book class
    Date: 05, October 2024
    Author: Boris B
    Version: 1.0
    Copyright: BorisB 2024


    DOCUMENTATION
    Program Purpose:
    To implement the Book class with the following attributes: title, ISBN, author, edition, publisher, and year of publication. 
    The Book class should have get and set methods for each attribute.

    Compile: This file is to be included in Problem2.cpp
    Execution: This file is not executable

    Classes:
    Book - class for creating Book objects

    Variables:
    titleInstance - string - title of the book
    ISBNInstance - string - ISBN number of the book
    authorInstance - string - author of the book
    editionInstance - string - edition of the book
    publisherInstance - string - publisher of the book
    yearOfPublicationInstance - string - year of publication of the book

    Methods:
    Book() - constructor - default constructor
    Book(string title, string ISBN, string author, string edition, string publisher, string yearOfPublication) - constructor - constructor with parameters
    getTitle() - string - get the title of the book
    getISBN() - string - get the ISBN of the book
    getAuthor() - string - get the author of the book
    getEdition() - string - get the edition of the book
    getPublisher() - string - get the publisher of the book
    getYearOfPublication() - string - get the year of publication of the book

    setTitle(string title) - void - set the title of the book
    setISBN(string ISBN) - void - set the ISBN of the book
    setAuthor(string author) - void - set the author of the book
    setEdition(string edition) - void - set the edition of the book
    setPublisher(string publisher) - void - set the publisher of the book
    setYearOfPublication(string yearOfPublication) - void - set the year of publication of the book

    TEST PLAN
    Normal case:
    Make sure the Book class is implemented correctly by calling the get and set methods outside of the class.
*/


#include "Book.h"

Book::Book() {
    titleInstance = "";
    ISBNInstance = "";
    authorInstance = "";
    editionInstance = "";
    publisherInstance = "";
    yearOfPublicationInstance = "";
};

Book::Book(string title, string ISBN, string author, string edition, string publisher, string yearOfPublication) {
    this->titleInstance = title;
    this->ISBNInstance = ISBN;
    this->authorInstance = author;
    this->editionInstance = edition;
    this->publisherInstance = publisher;
    this->yearOfPublicationInstance = yearOfPublication;
};

// Get Methods
string Book::getTitle() {
    return titleInstance;
};
string Book::getISBN(){
    return ISBNInstance;
};
string Book::getAuthor(){
    return authorInstance;
};
string Book::getEdition(){
    return editionInstance;
};
string Book::getPublisher(){
    return publisherInstance;
};
string Book::getYearOfPublication(){
    return yearOfPublicationInstance;
};

// Set Methods
void Book::setTitle(string title){
    titleInstance = title;
};
void Book::setISBN(string ISBN){
    ISBNInstance = ISBN;
};
void Book::setAuthor(string author){
    authorInstance = author;
};
void Book::setEdition(string edition){
    editionInstance = edition;
};
void Book::setPublisher(string publisher){
    publisherInstance = publisher;
};
void Book::setYearOfPublication(string yearOfPublication){
    yearOfPublicationInstance = yearOfPublication;
};