#include "Duck.h"

Duck::Duck() {
    type = "duck";
    std::cout << "I am a duck" << std::endl;
}

// Duck::~Duck() {
//     std::cout << "Duck destruction :(" << std::endl;
// }

void Duck::sound() {
    std::cout << "The duck says Quack" << std::endl;
}
