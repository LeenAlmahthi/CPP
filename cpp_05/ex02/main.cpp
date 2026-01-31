#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

// int main (){
//     std::cout << "=== Testing ShrubberyCreationForm ===" << std::endl << std::endl;
    
//     try {
//         std::cout << "--- Test 1: Creating form and bureaucrat ---" << std::endl;
//         ShrubberyCreationForm garden("home_garden");
//         Bureaucrat bob("Bob", 150);
//         std::cout << bob;
//         std::cout << garden;
//         std::cout << std::endl;

//         garden.execute(bob);
//         std::cout << "--- Test 2: Signing the form (Bob has grade 140, needs 145 or better) ---" << std::endl;
//         bob.signAForm(garden);
//         std::cout << garden;
//         std::cout << std::endl;
//         garden.execute(bob);

//     } catch (std::exception &e) {
//         std::cout << "Exception caught: " << e.what() << std::endl;
//     }

//     std::cout << std::endl;

//     try {
//         std::cout << "--- Test 4: Bureaucrat with insufficient grade to sign ---" << std::endl;
//         ShrubberyCreationForm office("office");
//         Bureaucrat intern("Intern", 150);
//         std::cout << intern;
//         intern.signForm(office);
//         std::cout << office;
//         std::cout << std::endl;

//     // } catch (std::exception &e) {
//     //     std::cout << "Exception caught: " << e.what() << std::endl;
//     // }

//     // std::cout << std::endl;

//     // try {
//     //     std::cout << "--- Test 5: Try to execute unsigned form ---" << std::endl;
//     //     ShrubberyCreationForm park("park");
//     //     Bureaucrat alice("Alice", 100);
//     //     std::cout << alice;
//     //     std::cout << park;
//     //     alice.executeForm(park);  // Should fail - not signed
//     //     std::cout << std::endl;

//     // } catch (std::exception &e) {
//     //     std::cout << "Exception caught: " << e.what() << std::endl;
//     // }

//     // std::cout << std::endl;

//     // try {
//     //     std::cout << "--- Test 6: Bureaucrat with insufficient grade to execute ---" << std::endl;
//     //     ShrubberyCreationForm forest("forest");
//     //     Bureaucrat charlie("Charlie", 145);  // Can sign but not execute
//     //     Bureaucrat manager("Manager", 138);   // Cannot execute (needs 137 or better)
        
//     //     std::cout << charlie;
//     //     charlie.signForm(forest);
//     //     std::cout << forest;
        
//     //     std::cout << manager;
//     //     manager.executeForm(forest);  // Should fail - grade too low
//     //     std::cout << std::endl;

//     // } catch (std::exception &e) {
//     //     std::cout << "Exception caught: " << e.what() << std::endl;
//     // }

//     std::cout << std::endl << "=== All tests completed ===" << std::endl;
//     return 0;
// }
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	std::cout << "\033[33m" << std::endl << "Test ex02" << "\033[0m" << std::endl;

	std::cout << "\033[33m" << std::endl << "Test ex02 ShrubberyCreationForm" << "\033[0m" << std::endl;
	Bureaucrat Mr_Shrubby("Mr_Shrubby", 130);
	ShrubberyCreationForm Shrubby_form("Hello");
	std::cout << std::endl;
	std::cout << Shrubby_form;
	Mr_Shrubby.signAForm(Shrubby_form);
	std::cout << Shrubby_form;
	Mr_Shrubby.executeForm(Shrubby_form);

	std::cout << "\033[33m" << std::endl << "Test ex02 RobotomyRequestForm" << "\033[0m" << std::endl;
	RobotomyRequestForm Robo_form("I am a robo form");
	Bureaucrat Mr_Robo("Mr_Robo", 45);

	Mr_Robo.executeForm(Robo_form);
	Mr_Robo.signAForm(Robo_form);
	Mr_Robo.executeForm(Robo_form);
	Mr_Robo.executeForm(Robo_form);
	Mr_Robo.executeForm(Robo_form);

	std::cout << "\033[33m" << std::endl << "Test ex02 PresidentialPardonForm" << "\033[0m" << std::endl;
	PresidentialPardonForm President_form("I am a robo form");
	Bureaucrat Mr_President("Mr_President", 5);

	Mr_Robo.executeForm(President_form);
	Mr_Robo.signAForm(President_form);

	Mr_President.executeForm(President_form);
	Mr_President.signAForm(President_form);
	Mr_President.executeForm(President_form);
	
	return (0);
}