#include "Dog.hpp"

Dog::Dog(){
    type = "Dog";
    std::cout << "[Dog] Default constructor created\n";
}

Dog::Dog(std::string type){
    (void)type;
    this->type = "Dog";
    std::cout << "[Dog] Parameters constructor created\n";
}
std::string Dog::getType() const{
    return (type);
}
Dog::Dog(Dog const &tmp) : Animal(tmp){
    *this = tmp; 
    std::cout << "[Dog] Copy constructor created\n";
}
void Dog::makeSound() const{
        std::cout << type << " Make sound\n"; 
}
// void Dog::leen(){
//     std::cout << "leen dd\n";
// }
Dog::~Dog(){
     std::cout << "[Dog] deconstruct constructor\n";
}
Dog &Dog::operator=(const Dog &tmp){
    
    if (this != &tmp)
    {
        type = tmp.type;
    }
    return(*this);
}