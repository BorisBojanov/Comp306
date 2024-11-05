/*  
    Title: Problem2.cpp
    Description:
    Creates multiple Book objects and demonstrates the use of the Book class.
    Classes and class instances; private instance variables; get/set methods; display to standard output
    Date: 05, October 2024
    Author: Boris B
    Version: 1.0
    Copyright: BorisB 2024

    DOCUMENTATION
    Program Purpose:
    To create multiple Book objects and demonstrate the use of the Book class and all of its functions.

    Compile: g++ Problem2.cpp Book.cpp -o Problem2
    Execution: ./Problem2

    Classes: 
    Book - class for creating Book objects

    Variables:
    book1 - Book - first Book object
    book2 - Book - second Book object
    book3 - Book - third Book object
    book4 - Book - fourth Book object
    arrayOfBooks - Book[] - array of Book objects
    numOfBooks - int - number of books in the array
    i - int - loop counter
    userInput - string - user input
    commands - vector<string> - vector of commands from userInput

    Functions:
    splitStringBySpace - vector<string> - split the string into words using stringstream and return a vector of strings
    main - int - main function to test the Book class

*/

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "Book.h"

using namespace std;
// Split the string into words using stringstream and return a vector of strings
vector<string> splitStringBySpace(const string& target) {
    vector<string> commands;
    istringstream stream(target);
    string word;
    
    while (stream >> word) {
        commands.push_back(word);
    }
    
    return commands;
}

int main(){
    // Create the Book objects
    // BookVariable(string title, string ISBN, string author, string edition, string publisher, string yearOfPublication);
    Book book1("Wooosh", "1", "I am author", "1st", "Charles Scribner's Sons", "1655");
    Book book2("Birds Lots O Birds", "2", "Harper Lee", "1st", "J.B. Lippincott & Co.", "1960");
    Book book3("The Great Book Of Car", "3", "George Orwell", "1st", "Secker & Warburg", "2540");
    Book book4("The Cold Catcher", "4", "J.D. Salinger", "1st", "Little, Brown and Company", "1750");
    
    Book arrayOfBooks[30] = {book1, book2, book3, book4};
    int i = 0;
    int numOfBooks = 4;

    // Test your Book class by creating several books and displaying the attributes using the get methods. 
    // Display the attributes of each book using the get methods.
    string userInput;

    cout << "Enter the command to display the attributes of each book using the get methods: "<< "\n";
    cout << "get title"<< "\n";
    cout << "get ISBN"<< "\n";
    cout << "get author"<< "\n";
    cout << "get edition"<< "\n";
    cout << "get publisher"<< "\n";
    cout << "get year"<< "\n";
    cout << "set title [BookISBN] [new title]"<< "\n";
    cout << "set ISBN [BookISBN] [new ISBN]"<< "\n";
    cout << "set author [BookISBN] [new author]"<< "\n";
    cout << "set edition [BookISBN] [new edition]"<< "\n";
    cout << "set publisher [BookISBN] [new publisher]"<< "\n";
    cout << "set year [BookISBN] [new year]"<< "\n";
    cout << "Enter the command: ";
    cin >> userInput;
    
    // Split user input into a vector of commands
    vector <string> commands = splitStringBySpace(userInput);

    // Check if the first command is "get"
    if (commands[0]=="get") {
        // Further checks on the following part of the command
        if (commands[1] == "title") {
            // Display the title of each book stored in the array
            for (i = 0; i < numOfBooks; i++) {
                cout << "The title is: " << arrayOfBooks[i].getTitle() << endl;
            }
        } else if (commands[1]== "ISBN"){
            // Display the ISBN of each book stored in the array
            for (i = 0; i < numOfBooks; i++) {
                cout << "The ISBN is: " << arrayOfBooks[i].getISBN() << endl;
            }
        } else if(commands[1]== "author"){
            // Display the author of each book stored in the array
            for (i = 0; i < numOfBooks; i++) {
                cout << "The author is: " << arrayOfBooks[i].getAuthor() << endl;
            }
        } else if(commands[1]== "edition"){
            // Display the edition of each book stored in the array
            for (i=0; i < numOfBooks; i++) {
                cout << "The edition is: " << arrayOfBooks[i].getEdition() << endl;
            }
        } else if(commands[1]== "publisher"){
            // Display the publisher of each book stored in the array
            for (i=0; i < numOfBooks; i++) {
                cout << "The publisher is: " << arrayOfBooks[i].getPublisher() << endl;
            }
        } else if(commands[1]== "year"){
            // Display the year of publication of each book stored in the array
            for (i=0; i < numOfBooks; i++) {
                cout << "The year is: " << arrayOfBooks[i].getYearOfPublication() << endl;
            }
        } 

    } else if (commands[0] == "set") {
        // Further checks on the following part of the command
        if (commands[1] == "title") {
            // Loop through the array of books to find the book with the specified ISBN
            for (i = 0; i < numOfBooks; i++) {
                // Set the title of a specified book stored in the array
                if (commands[2] == arrayOfBooks[i].getISBN()) {
                    arrayOfBooks[i].setTitle(commands[3]);
                }
            }
        } else if (commands[1] == "ISBN") {
            // Loop through the array of books to find the book with the specified ISBN
            for (i = 0; i < numOfBooks; i++) {
                // Set the ISBN of a specified book stored in the array
                if (commands[2] == arrayOfBooks[i].getISBN()) {
                    arrayOfBooks[i].setISBN(commands[3]);
                }
            }
        } else if (commands[1] == "author"){
            // Loop through the array of books to find the book with the specified ISBN
            for (i=0; i < numOfBooks; i++){
                // Set the author of a specified book stored in the array
                if (commands[2] == arrayOfBooks[i].getISBN()){
                    arrayOfBooks[i].setAuthor(commands[3]);
                }
            }
        } else if (commands[1] == "edition"){
            // Loop through the array of books to find the book with the specified ISBN
            for (i=0; i < numOfBooks; i++){
                // Set the edition of a specified book stored in the array
                if (commands[2] == arrayOfBooks[i].getISBN()){
                    arrayOfBooks[i].setEdition(commands[3]);
                }
            }
        } else if (commands[1] == "publisher"){
            // Loop through the array of books to find the book with the specified ISBN
            for (i=0; i < numOfBooks; i++){
                // Set the publisher of a specified book stored in the array
                if (commands[2] == arrayOfBooks[i].getISBN()){
                    arrayOfBooks[i].setPublisher(commands[3]);
                }
            }
        } else if (commands[1] == "year"){
            // Loop through the array of books to find the book with the specified ISBN
            for (i=0; i < numOfBooks; i++){
                // Set the year of publication of a specified book stored in the array
                if (commands[2] == arrayOfBooks[i].getISBN()){
                    arrayOfBooks[i].setYearOfPublication(commands[3]);
                }
            }
        } else {
            // Display an error message if the command is invalid
            cout << "Invalid command" << '\n';
            cout << "The ISBN does not match any book in the array." << endl;
        }
    } else {
        // Display an error message if the command is invalid
        cout << "Invalid command" << '\n';
        cout << "The command does not match any of the available commands." << endl;
        cout << "Exiting the program." << endl;
    }
    return 0;
}