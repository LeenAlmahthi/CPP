#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
Intern::Intern(){
    std::cout << "Default constructor\n";  
}

Intern::Intern(const Intern &tmp){
    std::cout << "Copy constructor\n";
    *this = tmp;
}
Intern::~Intern(){
    std::cout << "Deconstruct constructor\n";
};
Intern& Intern::operator=(const Intern &tmp){
    std::cout << "Assignment Operator\n";
    (void)tmp;
    return (*this);
}
 AForm *Intern::makeForm(std::string type_form, std::string target){

    std::string forms[3] = {"ShrubberyCreationForm","RobotomyRequestForm","PresidentialPardonForm"};
    int x = -1;
    for (int i = 0; i < 3; i++)
    {
        if (forms[i] == type_form)
        {
            x = i;
            break;
        }
    }
    switch (x)
    {
        case 0:
            std::cout << "Intern creates " << type_form << std::endl;
            return new ShrubberyCreationForm(target);
        case 1:
            std::cout << "Intern creates " << type_form << std::endl;
            return new RobotomyRequestForm(target);
        case 2:
            std::cout << "Intern creates " << type_form << std::endl;
            return new PresidentialPardonForm(target);
        default:
            std::cout << "Intern couldn’t create " << type_form << " because it doesn’t exist." << std::endl;
            return NULL;
    }
}
 