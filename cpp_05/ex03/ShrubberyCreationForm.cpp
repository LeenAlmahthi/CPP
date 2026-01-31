#include "ShrubberyCreationForm.hpp"
#include <fstream> 

ShrubberyCreationForm::ShrubberyCreationForm() : AForm(){
    std::cout << "Default constructor\n";
    target = "default";
    g_sign = 145;
    g_exec = 137;
    // if (g_sign < 1 || g_exec < 1 )
    //     throw(GradeTooHighException());
    // else if if (g_sign > 150 || g_exec > 150 )
    //     throw(GradeTooLowException());   
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target,145,137){
    std::cout << "Parameters constructor\n"; 
    this->target = target;
    g_sign = 145;
    g_exec = 137;
    // if (g_sign < 1 || g_exec < 1 )
    //     throw(GradeTooHighException());
    // else if (g_sign > 150 || g_exec > 150 )
    //     throw(GradeTooLowException());
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &tmp) :AForm(tmp){
    std::cout << "Copy constructor\n";
    *this = tmp;
}
ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "Deconstruct constructor\n";
};
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &tmp){
    std::cout << "Assignment Operator\n";
    if (this != &tmp)
    {
        target = tmp.target;
        g_sign = tmp.g_sign;
        g_exec = tmp.g_exec;
    }
    return (*this);
}
// bool ShrubberyCreationForm::get_sign() const{
//     return (sign);
// }
std::string ShrubberyCreationForm::get_target() const {
    return(target);
}

// const char *ShrubberyCreationForm::GradeTooHighException::what()  const throw(){
//     return ("Grade too Hight");
// };
// const char *ShrubberyCreationForm::GradeTooLowException::what()  const throw(){
//     return ("Grade too Low");
// };
// void ShrubberyCreationForm::beSigned(Bureaucrat &Bur){
//     if (Bur.getGrade() < 1 || g_sign < 1)
//        throw(GradeTooHighException());
//     else if (Bur.getGrade() > 150 || g_sign > 150 )
//         throw(GradeTooLowException());
//     if (Bur.getGrade() <= g_sign)
//         sign = !sign;
// };
void ShrubberyCreationForm::execute(Bureaucrat const & executor)const {
    (void)executor; 
    if (check_if_valid("ShrubberyCreationForm",executor))
    {
        std::string file_name = get_target()  + "_shrubbery";
        const char *ch = file_name.c_str(); 
        std::ofstream file(ch);
        file <<
        "               &&& &&  & &&\n"
        "           && &\\/&\\|& ()|/ @, &&\n"
        "           &\\/(\\/&/&||/& /_/)_&/_&\n"
        "        &() &\\/&|()|/&\\/ '%\" & ()\n"
        "       &_\\_&&_\\ |& |&&/&__%_/_& &&\n"
        "     &&   && & &| &| /& & % ()& /&&\n"
        "      ()&_---()&\\&\\|&&-&&--%---()~\n"
        "          &&     \\|||/\n"
        "                  |||\n"
        "                  |||\n"
        "                  |||\n"
        "            , -=-~  .-^- _\n";
    }
}

std::ostream& operator<<(std::ostream &os,const ShrubberyCreationForm &a){
     os << a.get_target() << " " << "Signed: ";
    if (a.get_sign())
        os << "Yes\n";
    else 
        os << "No\n";
    return (os);
}
