#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
class Bureaucrat; // this will tell the compiler to allocate to the bur
class Form{
    private:
        std::string name; // const
        bool sign;
        int sign_grade_req;
        int execute_grade_req;
    public:
        Form();
        Form(std::string name, int req_sign, int req_exe);
        Form(const Form &tmp);
        ~Form();
        Form& operator=(const Form &tmp);
        void beSigned(Bureaucrat &Bur);
        bool get_sign() const;
        std::string get_name() const;
        class GradeTooHighException : public std::exception {
            public :
                 const  char *what() const throw();    
        };  
        class GradeTooLowException : public std::exception {
            public :
                const char * what() const throw();
        };
};
std::ostream& operator<<(std::ostream &os,const Form &a);
#endif
/*
NOTE ABOUT CIRCULAR DEPENDENCIES (C++ MODULE 05)

Form and Bureaucrat depend on each other:
- Form needs Bureaucrat (beSigned, grade checks)
- Bureaucrat needs Form (signForm)

PROBLEM:
Including both headers inside each other creates a circular dependency.
When the compiler processes the headers, one class is not yet known.

WHAT ACTUALLY HAPPENS DURING COMPILATION:

main.cpp
   |
   v
Bureaucrat.hpp
   |
   v
Form.hpp
   |
   v
(Bureaucrat.hpp is included again → skipped due to include guards)

Result:
Form.hpp tries to use `Bureaucrat`, but the class has NOT been declared yet.

Diagram:

   +------------------+
   |  Bureaucrat.hpp  |
   +------------------+
            |
            v
      +-------------+
      |  Form.hpp   |
      +-------------+
            |
            v
   (Bureaucrat.hpp already included → ignored)
            |
            v
   ERROR: Bureaucrat is unknown here

COMPILER ERROR:
    'Bureaucrat' has not been declared

SOLUTION:
- Use a forward declaration in headers:
      class Bureaucrat;
- Include the full header only in the .cpp file.

RULE:
- Headers (.hpp): forward declarations, minimal includes
- Source files (.cpp): include full class definitions

This design avoids circular includes and compilation errors.
*/
