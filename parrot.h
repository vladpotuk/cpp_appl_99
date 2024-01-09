
#ifndef PARROT_H
#define PARROT_H

#include "pet.h"

class Parrot : public Pet {
public:
    Parrot(const std::string& name, int age, const std::string& color);

    
    void displayInfo() const override;

    
    void talk() const;

protected:
    std::string color;
};

#endif

