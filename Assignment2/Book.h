/*
This is the header file for the Book class.
This class is used to create Book objects that have the following attributes:
title, 
ISBN number, 
author, 
edition, 
publisher, 
year of publication.

DOCUMENTATION
Program Purpose:
The class should have get and set methods for each attribute.
The class should have a default constructor and a constructor with parameters.
The class methods are initialized here and implemented in Book.cpp.
The class attributes are initialized as private variables and can be accessed using the get and set methods.

Compile: This file is to be included in Book.cpp and Problem2.cpp
Execution: This file is not executable

Classes:
Book - class for creating Book objects

Variables:

TEST PLAN
Normal case:
Make sure the header file is implemented correctly by including it in the Book.cpp file. 
Making sure that all methods are declared correctly.

*/

#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <vector>

using namespace std;

class Book {
private:
    // Attributes
    string titleInstance;
    string ISBNInstance;
    string authorInstance;
    string editionInstance;
    string publisherInstance;
    string yearOfPublicationInstance;

    // Methods
    
public:
    // Constructors
    Book();
    //title, ISBN number, author, edition, publisher, and year of publication.
    Book(string title, string ISBN, string author, string edition, string publisher, string yearOfPublication);
    // Attributes

    // Methods
    // Get Methods
    string getTitle();
    string getISBN();
    string getAuthor();
    string getEdition();
    string getPublisher();
    string getYearOfPublication();

    // Set Methods
    void setTitle(string title);
    void setISBN(string ISBN);
    void setAuthor(string author);
    void setEdition(string edition);
    void setPublisher(string publisher);
    void setYearOfPublication(string yearOfPublication);

};


#endif // BOOK_H