#ifndef  SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include <iostream>
#include "AForm.hpp"
class ShrubberyCreationForm :public AForm
{
    private:
        std::string target; // const
        int g_sign;
        int g_exec;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &tmp);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm &tmp);
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
std::ostream& operator<<(std::ostream &os,const ShrubberyCreationForm &a);
#endif