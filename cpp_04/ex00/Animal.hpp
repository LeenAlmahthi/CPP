#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
class Animal{
    
    protected:
        std::string type;
    public:
    Animal(); 
    Animal(std::string type);
    Animal(Animal const &tmp);
    virtual ~Animal();
    Animal &operator=(const Animal &tmp);
    std::string getType() const; 
    void makeSound() const;
};
#endif