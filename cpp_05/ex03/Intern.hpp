#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
class AForm;
class Intern{
    
    public:
    Intern();
    Intern(const Intern &tmp);
    ~Intern();
    Intern& operator=(const Intern &tmp);
    AForm *makeForm(std::string type_form, std::string target); 
};
std::ostream& operator<<(std::ostream &os, const Intern &tmp);
#endif