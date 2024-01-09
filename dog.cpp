#include "dog.h"
#include <iostream>

Dog::Dog(const std::string& name, int age, const std::string& breed) : Pet(name, age), breed(breed) {}

void Dog::displayInfo() const {
    Pet::displayInfo();
    std::cout << ", Breed: " << breed << std::endl;
}

void Dog::bark() const {
    std::cout << "Woof! Woof!" << std::endl;
}
