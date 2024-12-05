#include "Pig.h"

// Constructor
Pig::Pig() {
    type = "pig";
    cout << "I am a "<< type << "." << endl;
}

// Destructor Operational
Pig::~Pig() {
    std::cout << "I was a "<< type << "." << std::endl;
}

void Pig::sound() {
    cout << "The " << type << " says Oink." << endl;
}