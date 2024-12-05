#include "Cow.h"

// Constructor
Cow::Cow(){
    
    type = "cow";
    std::cout << "I am a "<< type << std::endl;
}

Cow::~Cow(){
    std::cout << "The cow is dead now" << std::endl;
}

void Cow::sound(){
    std::cout << "The " << type << " says moo" << std::endl;
}