#include "Bureaucrat.hpp"
#include "AForm.hpp"

AForm::AForm() {
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
AForm::AForm(std::string name, int req_grade, int req_exe){
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
AForm::AForm(const AForm &tmp){
    std::cout << "Copy constructor\n";
    *this = tmp;
}
AForm::~AForm(){
    std::cout << "Deconstruct constructor\n";
};
AForm& AForm::operator=(const AForm &tmp){
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
bool AForm::get_sign() const{
    return (sign);
}

const char *AForm::GradeTooHighException::what()  const throw(){
    return ("Grade too Hight");
};
const char *AForm::GradeTooLowException::what()  const throw(){
    return ("Grade too Low");
};
void AForm::beSigned(Bureaucrat &Bur){
    if (Bur.getGrade() < 1 || sign_grade_req < 1)
       throw(GradeTooHighException());
    else if (Bur.getGrade() > 150 || sign_grade_req > 150 )
        throw(GradeTooLowException());
    if (Bur.getGrade() <= sign_grade_req)
        sign = true;
};
std::string AForm::get_name() const {
    return(name);
}
bool AForm::check_if_valid(std::string target ,Bureaucrat const &exc) const {
    if (!this->get_sign())
    {
        return (false);
    }
    if (target == "ShrubberyCreationForm")
    {
        if (exc.getGrade() > this->execute_grade_req)
            return (false);
    }
    // else if (target == "RobotomyRequestForm")
    // {
    //     if (sign_grade_req > 72 || execute_grade_req > 45)
    //         return (0);
    // }
    //  else if (target == "PresidentialPardonForm")
    // {
    //     if (sign_grade_req > 25 || execute_grade_req > 5)
    //         return (0);
    // }
    return (true);
};
std::ostream& operator<<(std::ostream &os,const AForm &a){
     os << a.get_name() << " " << "Signed: ";
    if (a.get_sign())
        os << "Yes\n";
    else 
        os << "No\n";
    return (os);
}
