#ifndef DUCK_H
#define DUCK_H

#include "Animal.h"

class Duck : public Animal {
    public:
        Duck();
        // ~Duck();

        void sound();
};

#endif //Duck_H