#include "pet.h"
#include <iostream>

Pet::Pet(const std::string& name, int age) : name(name), age(age) {}

void Pet::displayInfo() const {
    std::cout << "Name: " << name << ", Age: " << age;
}
