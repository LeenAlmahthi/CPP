#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Enter one value to convert it\n";
        return(0);
    }
    ScalarConverter tmp;
    tmp.convert(argv[1]);
    
}