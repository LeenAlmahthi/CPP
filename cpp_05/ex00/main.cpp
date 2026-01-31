#include "Bureaucrat.hpp"
int main ()
{
    try {
    Bureaucrat leen;
    Bureaucrat leen2("rama" , -1);
    Bureaucrat leen3(leen2);
    Bureaucrat leen4;
    leen4 = leen;
    std::cout << leen;
    std::cout << leen2;
    std::cout << leen3;
    std::cout << leen4;
    leen2.increment_grade();
    leen2.decrement_grade();
    std::cout << leen2 << "after error ";
    }
    // catch (std::exception &e) {
    //     std::cout <<"Error: " <<  e.what() << std::endl;
    // }
    catch (Bureaucrat::GradeTooHighException &e){
        std::cout <<"Error: " <<  e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    // try {
    //     throw std::runtime_error("Grade is too high!");
    // }                                                                        // this the different i can use it put not allow in the subject 
    // catch (const std::exception& e) {                                        // without define in class 
    //     std::cout << "Error: " << e.what() << std::endl;
    // }

}