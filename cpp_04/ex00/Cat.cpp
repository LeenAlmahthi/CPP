#include "Cat.hpp"

Cat::Cat(){
    type = "Cat";
    std::cout << "[cat] Default constructor created\n";
}
Cat::Cat(std::string type){
    (void)type;
    this->type = "Cat";
    std::cout << "[cat] Parameters constructor created\n";
}
std::string Cat::getType() const{
    return (type+ "leen" );
}
Cat::Cat(Cat const &tmp) :Animal(tmp){
    *this = tmp; 
    std::cout << "[cat] Copy constructor created\n";
}
// void Cat::makeSound() const{
//         std::cout << type << " Make sound\n"; 
// }
Cat::~Cat(){
     std::cout << "[cat] deconstruct constructor\n";
}
Cat &Cat::operator=(const Cat &tmp){
    
    if (this != &tmp)
    {
        type = tmp.type;
    }
    return(*this);
}