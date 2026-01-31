#ifndef  ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include <iostream>
#include "AForm.hpp"
class RobotomyRequestForm :public AForm
{
    private:
        std::string target; // const
        int g_sign;
        int g_exec;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &tmp);
        ~RobotomyRequestForm();
        RobotomyRequestForm& operator=(const RobotomyRequestForm &tmp);
        std::string get_target() const;
        void execute(Bureaucrat const & executor) const; 

};
std::ostream& operator<<(std::ostream &os,const RobotomyRequestForm &a);
#endif