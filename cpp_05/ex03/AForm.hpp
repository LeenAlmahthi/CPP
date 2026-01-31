// https://chatgpt.com/share/696178d4-6f90-800b-8315-f00135662554
#ifndef AFORM_HPP
#define AFORM_HPP
#include <iostream>
class Bureaucrat; // this will tell the compiler to allocate to the bur
class AForm{
    private:
        std::string name; // const
        bool sign;
        int sign_grade_req;
        int execute_grade_req;
    public:
        AForm();
        AForm(std::string name, int req_sign, int req_exe);
        AForm(const AForm &tmp);
        virtual ~AForm();
        AForm& operator=(const AForm &tmp);
        void beSigned(Bureaucrat &Bur);
        std::string get_name() const;
        virtual void execute(Bureaucrat const & executor) const = 0;
        bool get_sign() const;
        bool check_if_valid(std::string target,Bureaucrat const & executor) const; 
    protected:    
        class GradeTooHighException : public std::exception {
            public :
                 const  char *what() const throw();    
        };  
        class GradeTooLowException : public std::exception {
            public :
                const char * what() const throw();
        };

};
std::ostream& operator<<(std::ostream &os,const AForm &a);
#endif