#ifndef COW_H
#define COW_H

#include "Animal.h"

class Cow : public Animal {
    public:
        Cow(); // Default constructor
        // ~Cow(); // Deconstructor

        void sound(); // Sound method
};

#endif // COW_H