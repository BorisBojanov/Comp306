
#include "Animal.h"
/*
Constructor: Outputs "I am an animal" when an Animal.
sound() Method: Outputs a generic message.

virtual Keyword: Allows derived classes to override the method.
*/

// Default Constructor 
Animal::Animal() : type("Animal") {
    std::cout << "I am an animal" << std::endl;
}
// Destructor
Animal::~Animal() {
}

void Animal::sound() {
    std::cout << "An animal makes a sound based on the animal that it is" << std::endl;
}