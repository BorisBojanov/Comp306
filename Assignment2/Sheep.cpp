#include "Sheep.h"

// Constructor 
Sheep::Sheep(){
    type = "sheep";
    std::cout <<"I am a " << type << "." << std::endl;
}

Sheep::~Sheep(){
    std::cout << "I was a " << type << " and I am being destroyed." << std::endl;
}

void Sheep::sound(){
    std::cout << "The sheep says baa!" << std::endl;
}