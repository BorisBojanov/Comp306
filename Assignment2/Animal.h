#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal {
    public:
        // Default constuctor
        Animal();

        // Deconstructor
        virtual ~Animal();

        // Sound method
        virtual void sound();

    protected:
        std::string type;    
};

#endif // ANIMAL_H