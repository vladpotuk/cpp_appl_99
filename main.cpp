#include <iostream>
#include "dog.h"
#include "cat.h"
#include "parrot.h"

int main() {
    Dog myDog("Buddy", 3, "Golden Retriever");
    Cat myCat("Whiskers", 2, true);
    Parrot myParrot("Polly", 1, "Green");

    std::cout << "Dog Information: ";
    myDog.displayInfo();
    myDog.bark();

    std::cout << "\nCat Information: ";
    myCat.displayInfo();
    myCat.meow();

    std::cout << "\nParrot Information: ";
    myParrot.displayInfo();
    myParrot.talk();

    return 0;
}
