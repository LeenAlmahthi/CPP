#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include <iostream>
#include "AForm.hpp"
class PresidentialPardonForm :public AForm
{
    private:
        std::string target; // const
        int g_sign;
        int g_exec;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &tmp);
        ~PresidentialPardonForm();
        PresidentialPardonForm& operator=(const PresidentialPardonForm &tmp);
        std::string get_target() const;
        // void beSigned(Bureaucrat &Bur);
        // bool get_sign() const;
        // class GradeTooHighException : public std::exception {
        //     public :
        //          const  char *what() const throw();    
        // };  
        // class GradeTooLowException : public std::exception {
        //     public :
        //         const char * what() const throw();
        // };
        void execute(Bureaucrat const & executor) const; 

};
std::ostream& operator<<(std::ostream &os,const PresidentialPardonForm &a);
#endif