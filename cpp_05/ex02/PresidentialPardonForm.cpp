#include "PresidentialPardonForm.hpp"
#include <fstream> 
#include <cstdlib>


PresidentialPardonForm::PresidentialPardonForm() : AForm(){
    std::cout << "Default constructor\n";
    target = "default";
    g_sign = 72;
    g_exec = 45;
}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target,145,137){
    std::cout << "Parameters constructor\n"; 
    this->target = target;
    g_sign = 72;
    g_exec = 45;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &tmp) :AForm(tmp){
    std::cout << "Copy constructor\n";
    *this = tmp;
}
PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "Deconstruct constructor\n";
};
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &tmp){
    std::cout << "Assignment Operator\n";
    if (this != &tmp)
    {
        target = tmp.target;
        g_sign = tmp.g_sign;
        g_exec = tmp.g_exec;
    }
    return (*this);
}
std::string PresidentialPardonForm::get_target() const {
    return(target);
}
void PresidentialPardonForm::execute(Bureaucrat const & executor)const {
    
    if (check_if_valid("PresidentialPardonForm",executor))
    {
       std::cout << get_target() << " has been pardoned by Zaphod Beeblebrox" << std::endl;	
    }
}

std::ostream& operator<<(std::ostream &os,const PresidentialPardonForm &a){
     os << a.get_target() << " " << "Signed: ";
    if (a.get_sign())
        os << "Yes\n";
    else 
        os << "No\n";
    return (os);
}
