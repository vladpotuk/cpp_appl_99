#include "cat.h"
#include <iostream>

Cat::Cat(const std::string& name, int age, bool hasWhiskers) : Pet(name, age), hasWhiskers(hasWhiskers) {}

void Cat::displayInfo() const {
    Pet::displayInfo();
    std::cout << ", Has Whiskers: " << (hasWhiskers ? "Yes" : "No") << std::endl;
}

void Cat::meow() const {
    std::cout << "Meow!" << std::endl;
}
