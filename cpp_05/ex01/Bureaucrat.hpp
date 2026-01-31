#ifndef BUREAUCRAT_HPP
#define  BUREAUCRAT_HPP
#include <iostream>
class Form;
class Bureaucrat {
    private: 
        std::string name;
        int grade;
    public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &tmp);
    ~Bureaucrat();
    Bureaucrat& operator=(const Bureaucrat &tmp);
    int getGrade() const;
    std::string getName() const;
    void    decrement_grade();
    void    increment_grade();
    void    signForm(Form &a);
    class GradeTooHighException :public std::exception{
        public:
        const  char *what() const throw();
    };
    class GradeTooLowException : public std::exception {
       public:
        const char *what()  const throw();
    };
};
std::ostream& operator<<(std::ostream &os, const Bureaucrat &tmp);
#endif