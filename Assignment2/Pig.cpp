#include "Pig.h"

// Constructor
Pig::Pig() {
    type = "pig";
    std::cout << "I am a "<< type << "." << std::endl;
}

// Destructor Operational
// Pig::~Pig() {
//     std::cout << "I was a "<< type << "." << std::endl;
// }

void Pig::sound() {
    std::cout << "The " << type << " says Oink." << std::endl;
}