#include "RobotomyRequestForm.hpp"
#include <fstream> 
#include <cstdlib>


RobotomyRequestForm::RobotomyRequestForm() : AForm(){
    std::cout << "Default constructor\n";
    target = "default";
    g_sign = 72;
    g_exec = 45;
    // if (g_sign < 1 || g_exec < 1 )
    //     throw(GradeTooHighException());
    // else if if (g_sign > 150 || g_exec > 150 )
    //     throw(GradeTooLowException());   
}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target,145,137){
    std::cout << "Parameters constructor\n"; 
    this->target = target;
    g_sign = 72;
    g_exec = 45;
    // if (g_sign < 1 || g_exec < 1 )
    //     throw(GradeTooHighException());
    // else if (g_sign > 150 || g_exec > 150 )
    //     throw(GradeTooLowException());
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &tmp) :AForm(tmp){
    std::cout << "Copy constructor\n";
    *this = tmp;
}
RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "Deconstruct constructor\n";
};
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &tmp){
    std::cout << "Assignment Operator\n";
    if (this != &tmp)
    {
        target = tmp.target;
        g_sign = tmp.g_sign;
        g_exec = tmp.g_exec;
    }
    return (*this);
}
std::string RobotomyRequestForm::get_target() const {
    return(target);
}
void RobotomyRequestForm::execute(Bureaucrat const & executor)const {
    
    if (check_if_valid("RobotomyRequestForm",executor))
    {
       int random_number;
        random_number = rand() % 2;
    if (random_number == 1)
		std::cout << "Beeep Be Be Beeeee Beeeeeeeep. " << get_target() << " has been robotomized successfully!" << std::endl; 		
	else
	    std::cout << "Unfortunately robotomy failed.\n";
    }
}

std::ostream& operator<<(std::ostream &os,const RobotomyRequestForm &a){
     os << a.get_target() << " " << "Signed: ";
    if (a.get_sign())
        os << "Yes\n";
    else 
        os << "No\n";
    return (os);
}
