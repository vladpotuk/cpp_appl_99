
#ifndef DOG_H
#define DOG_H

#include "pet.h"

class Dog : public Pet {
public:
    Dog(const std::string& name, int age, const std::string& breed);

    
    void displayInfo() const override;

   
    void bark() const;

protected:
    std::string breed;
};

#endif

