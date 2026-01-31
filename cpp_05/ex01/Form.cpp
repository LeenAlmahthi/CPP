#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form() {
    std::cout << "Default constructor\n";
    name = "default";
    sign = 0;
    sign_grade_req = 20;
    execute_grade_req = 50;
    if (sign_grade_req < 1 || execute_grade_req < 1 )
        throw(GradeTooHighException());
    else if (sign_grade_req > 150 || execute_grade_req > 150 )
        throw(GradeTooLowException());   
}
Form::Form(std::string name, int req_grade, int req_exe){
    std::cout << "Parameters constructor\n"; 
    this->name = name;
    sign = 0;
    sign_grade_req = req_grade;
    execute_grade_req = req_exe;
    if (sign_grade_req < 1 || execute_grade_req < 1 )
        throw(GradeTooHighException());
    else if (sign_grade_req > 150 || execute_grade_req > 150 )
        throw(GradeTooLowException());
}
Form::Form(const Form &tmp){
    std::cout << "Copy constructor\n";
    *this = tmp;
}
Form::~Form(){
    std::cout << "Deconstruct constructor\n";
};
Form& Form::operator=(const Form &tmp){
    std::cout << "Assignment Operator\n";
    if (this != &tmp)
    {
        name = tmp.name;
        sign = tmp.sign;
        sign_grade_req = tmp.sign_grade_req;
        execute_grade_req = tmp.execute_grade_req;
    }
    return (*this);
}
bool Form::get_sign() const{
    return (sign);
}

const char *Form::GradeTooHighException::what()  const throw(){
    return ("Grade too Hight");
};
const char *Form::GradeTooLowException::what()  const throw(){
    return ("Grade too Low");
};
void Form::beSigned(Bureaucrat &Bur){
    if (Bur.getGrade() < 1 || sign_grade_req < 1)
       throw(GradeTooHighException());
    else if (Bur.getGrade() > 150 || sign_grade_req > 150 )
        throw(GradeTooLowException());
    if (Bur.getGrade() <= sign_grade_req)
        sign = true;
};
std::string Form::get_name() const {
    return(name);
}
std::ostream& operator<<(std::ostream &os,const Form &a){
     os << a.get_name() << " " << "Signed: ";
    if (a.get_sign())
        os << "Yes\n";
    else 
        os << "No\n";
    return (os);
}
