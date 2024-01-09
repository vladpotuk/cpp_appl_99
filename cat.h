#ifndef CAT_H
#define CAT_H

#include "pet.h"

class Cat : public Pet {
public:
    Cat(const std::string& name, int age, bool hasWhiskers);

    
    void displayInfo() const override;

   
    void meow() const;

protected:
    bool hasWhiskers;
};

#endif 

