#ifndef PIG_H
#define PIG_H

#include "Animal.h"

class Pig : public Animal {
public:
    Pig();
    ~Pig();

    void sound();
};

#endif // PIG_H