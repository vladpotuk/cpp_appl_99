#include "parrot.h"
#include <iostream>

Parrot::Parrot(const std::string& name, int age, const std::string& color) : Pet(name, age), color(color) {}

void Parrot::displayInfo() const {
    Pet::displayInfo();
    std::cout << ", Color: " << color << std::endl;
}

void Parrot::talk() const {
    std::cout << "Polly wants a cracker!" << std::endl;
}
