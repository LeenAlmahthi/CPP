#include "Bureaucrat.hpp"
#include "Form.hpp"
// Using `const char*` in Exception Handling
// ------------------------------------------
// C++ uses C-style strings (`const char*`) for exception messages because:
// - C++ was originally built on top of C, which uses C-style strings.
// - `const char*` is **simple** and **efficient** for error messages.
// - Even though `std::string` exists in C++, `const char*` is still preferred because:
//     - It's low-level and fast.
//     - It avoids extra memory management overhead like `std::string` does.

// The `const` in the `what()` function
// -------------------------------------
// The `const` at the end of the `what()` function (const char* what() const) 
// guarantees **const-correctness**. This means:
// - Calling `what()` will **not modify** the state of the exception object.
// - It ensures that the exception object will stay unchanged when you retrieve the error message.

// The `throw()` part
// -----------------
// The `throw()` in the function signature tells the compiler that this function will **not throw** any exceptions.
// In modern C++, `throw()` is often replaced with `noexcept`, which is more clear and specific.
// - This helps the compiler **optimize** the code by eliminating unnecessary exception-handling logic.
// - If a function is marked `throw()` or `noexcept`, the compiler knows it won’t throw any exceptions and can **skip extra handling mechanisms** for that function.


// Why use `throw()` or `noexcept` in `what()`?
// --------------------------------------------
// - The compiler uses `throw()` or `noexcept` to **optimize exception handling**.
// - When it sees `noexcept`, it knows the function won't throw an exception, so it can **skip exception-handling setup**.
// - This improves **performance** and makes the code **safer** by avoiding unnecessary exception-handling overhead.

Bureaucrat::Bureaucrat(){
    std::cout << "Default constructor\n"
    name = "default";
    grade = 150;   
}
Bureaucrat::Bureaucrat(std::string name, int grade){
    std::cout << "Parameters constructor\n" 
    this->name = name;
    this->grade = grade;
    if (grade < 1)
        throw(GradeTooHighException());
    else if (grade > 150)
        throw(GradeTooLowException());
}
Bureaucrat::Bureaucrat(const Bureaucrat &tmp){
    std::cout << "Copy constructor\n"
    *this = tmp;
}
Bureaucrat::~Bureaucrat(){
    std::cout << "Deconstruct constructor\n"
};
Bureaucrat& Bureaucrat::operator=(const Bureaucrat &tmp){
    std::cout << "Assignment Operator\n"
    if (this != &tmp)
    {
        name = tmp.name;
        grade = tmp.grade;
    }
    return (*this);
}
const char *Bureaucrat::GradeTooHighException::what()  const throw(){
    return ("Grade too Hight");
};
const char *Bureaucrat::GradeTooLowException::what()  const throw(){
    return ("Grade too Low");
};
std::string Bureaucrat::getName() const {
    return(this->name);
}
int Bureaucrat::getGrade() const{
    return (this->grade);
}
void Bureaucrat::increment_grade() {
    this->grade--;
    if (grade < 1)
        throw(GradeTooHighException());
}
void Bureaucrat::decrement_grade() {
    this->grade++;
    if (grade > 150)
        throw(GradeTooLowException());
}
std::ostream& operator<<(std::ostream &os, const Bureaucrat &tmp){
    os << tmp.getName() << ",  bureaucrat grade " << tmp.getGrade() << std::endl;
    return (os);
  }