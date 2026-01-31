#ifndef SCALAR_CONVERTER
#define SCALAR_CONVERTER
#include <string>
#include <iostream>
class ScalarConverter{
    public :
    ScalarConverter();
    ScalarConverter(const ScalarConverter &a);
    ~ScalarConverter();
    ScalarConverter& operator=(const ScalarConverter &a);
    static void convert(std::string s);
};
// i put function put it not related to the class are this correct?
// check the TO_DO before eval it is important  
bool ispseudo(std::string s);
#endif 