// NumberValidator.cpp

#include "NumberValidator.h"
#include <cctype> // For isdigit

bool NumberValidator::isValidNumber(const std::string& target) {
    int dotCount = 0;
    for (size_t i = 0; i < target.length(); ++i) {
        char c = target[i];
        if (c == '.') {
            dotCount++;
            if (dotCount > 1) return false;
        } else if (!std::isdigit(c) && c != '-' && c != '+') {
            return false;
        } else if ((c == '-' || c == '+') && i != 0) {
            // '-' or '+' not at the beginning
            return false;
        }
    }
    return true;
}
