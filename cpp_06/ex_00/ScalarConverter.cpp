#include "ScalarConverter.hpp"
#include <iostream>
#include <iomanip>
#include <limits>
#include <cstdlib>
#include <cctype>
#include <cmath>
ScalarConverter::ScalarConverter(){

};
ScalarConverter::ScalarConverter(const ScalarConverter &a){
    *this = a;
};
ScalarConverter::~ScalarConverter(){

};
ScalarConverter& ScalarConverter::operator=(const ScalarConverter &a){
    (void)a;
    return (*this);
};
bool  ispseudo(std::string s)
{
    if ( s == "nan"  || s == "+inf"  || s == "-inf" ||
        s == "nanf" || s == "+inff" || s == "-inff"
    )
        return (1);
    return (0);
}
bool is_float(std::string s)
{
    long unsigned int i = 0;
    int f = 0;
    if (s[0] == '-' || s[0] == '+')
        i = 1;
    while (s.length() > i)
    {
        if (s[i] == '.' && f == 0)
        {
            i++;
            f++;
            continue;
        }   
        if (!std::isdigit(s[i]))
            break;
        i++;
    }
    if (s[i] == 'f' && i+1 == s.length())
        return (1);
    return (0);
}

bool is_double(std::string s)
{
    long unsigned int i = 0;
    int f = 0;
    if (s[0] == '-' || s[0] == '+')
        i = 1;
    while (s.length() > i)
    {
        if (s[i] == '.' && f == 0)
        {
            i++;
            f++;
            continue;
        }   
        if (!std::isdigit(s[i]))
           return (0);
        i++;
    }
    if (f == 1)
        return (1);
    return (0);
}
bool is_int(std::string s)
{
   long unsigned int i = 0;
    if (s[0] == '-' || s[0] == '+')
        i = 1;
    if (i == s.length())
        return 0;
    while (s.length() > i)
    {
        if (!std::isdigit(s[i]))
           return (0);
        i++;
    }
    return (1);
}
void convert_int(std::string s){
    long value = std::atol(s.c_str());
    std::cout << "char: ";
    if (value < 0 || value  > 127 )
        std::cout << "impossible\n";
    else if (!std::isprint(static_cast<char>(value)))
        std::cout << "Non displayable\n";
    else 
        std::cout << static_cast<char>(value) << "\n";
    std::cout << "int: ";
    if (value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
        std::cout << "impossible\n";
    else 
        std::cout << static_cast<int>(value) << "\n";
    std::cout << "float: " << static_cast<float>(value) << ".0f" << "\n";
    std::cout << "double: " << static_cast<double>(value) << ".0"<< "\n";
};
void convert_float(std::string s){
    std::string tmp = s.substr(0,s.length()-1);
    float value = std::strtof(tmp.c_str(), NULL); // TO_DO
    std::cout << "char: ";
    if (value < 0 || value  > 127 )
        std::cout << "impossible\n";
    else if (!std::isprint(static_cast<char>(value)))
        std::cout << "Non displayable\n";
    else 
        std::cout << static_cast<char>(value) << "\n";
    std::cout << "int: ";
    if (value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
        std::cout << "impossible\n";
    else std::cout << static_cast<int>(value) << "\n";
    std::cout << std::fixed << std::setprecision(1); //TO_DO
    std::cout << "float: " << value << "f\n";
    std::cout << "double: " << static_cast<double>(value) << "\n";
};
void convert_double(std::string s){
    double value = std::strtod(s.c_str(), NULL); //TO_DO 
    std::cout << "char: ";
    if (value < 0 || value  > 127 )
        std::cout << "impossible\n";
    else if (!std::isprint(static_cast<char>(value)))
        std::cout << "Non displayable\n";
    else 
        std::cout << static_cast<char>(value) << "\n";
    std::cout << "int: ";
    if (value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
        std::cout << "impossible\n";
    else std::cout << static_cast<int>(value) << "\n";

    std::cout << std::fixed << std::setprecision(1); // TO_DO
    std::cout << "float: " << static_cast<float>(value) << "f\n";
    std::cout << "double: " << value << "\n";
};
void convert_pseudo(std::string s){
    if (s == "nanf")
        s = s.substr(0,s.length()-1);
    if (s.find("f") != s.length() -1 && s.find("f")  != std::string::npos)
    {
       std::cout << "char: impossible\n";
       std::cout << "int: impossible\n";
       std::cout << "float: " << s  << "\n";
       std::cout << "double: " << s.substr(0,s.length()-1) << "\n";
    }
    else 
    {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
        std::cout << "float: " << s  << "f\n";
        std::cout << "double: " << s << "\n";
    }
};
void convert_char(const std::string& s) {
    char value = s[0];
    std::cout << "char: " << value << "\n";
    std::cout << "int: " << static_cast<int>(value) << "\n";
    std::cout << "float: " << static_cast<float>(value) << ".0f\n";
    std::cout << "double: " << static_cast<double>(value) << ".0\n";
}
void actual_convert(std::string s,std::string type){
    if (type == "char")
        convert_char(s);
    else if (type == "int")
        convert_int(s);
    else if (type == "F")
        convert_float(s);
    else if (type == "D")
        convert_double(s);
    else 
        convert_pseudo(s);
};
void ScalarConverter::convert(std::string s)
{
    std::string type;
    if (ispseudo(s))
        type = "pseudo";
    else if (s.length() == 1 && std::isprint(s[0]) && !std::isdigit(s[0]))
        type = "char";
    else if (is_float(s))
         type = "F";
    else if (is_double(s))
         type = "D";
    else if (is_int(s))
        type = "int";
    else
    {
        std::cout << "Invalid input\n";
        return;
    } 
    // std::cout << s <<"   " << type << "\n"; 
    actual_convert(s,type);
    
}