#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>

#include "Animal.hpp"
class Cat :public Animal{
    
    public :
        Cat();
        Cat(std::string type);
        Cat(Cat const &tmp);
        virtual ~Cat();
        Cat &operator=(const Cat &tmp);
        // void makeSound() const;
        std::string getType() const;
};
#endif