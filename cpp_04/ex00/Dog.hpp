#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>

#include "Animal.hpp"

class Dog: public Animal{
    
    public :
        Dog();
        Dog(std::string type);
        Dog(Dog const &tmp);
        virtual ~Dog();
        Dog &operator=(const Dog &tmp);
        void makeSound() const;
        // void leen();
        std::string getType() const;

};
#endif