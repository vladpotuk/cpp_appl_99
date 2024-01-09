#ifndef PET_H
#define PET_H

#include <string>

class Pet {
public:
    Pet(const std::string& name, int age);

   
    virtual void displayInfo() const;

protected:
    std::string name;
    int age;
};

#endif 

