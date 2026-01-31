#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        // Create some Bureaucrats with different grades
        Bureaucrat john("John", 50);  // John has grade 50 (can sign forms with grade 50 or higher)
        Bureaucrat jane("Jane", 100); // Jane has grade 100 (can sign forms with grade 100 or higher)
        Bureaucrat alex("Alex", 10);  // Alex has grade 10 (can sign forms with grade 10 or higher)

        // Create several forms with different grade requirements
        Form formA("Form A", 45, 25);  // Form A requires grade 45 to sign and grade 25 to execute
        Form formB("Form B", 50, 30);  // Form B requires grade 50 to sign and grade 30 to execute
        Form formC("Form C", 10, 5);   // Form C requires grade 10 to sign and grade 5 to execute
        Form formD("Form D", 150, 100); // Form D requires grade 150 to sign and grade 100 to execute (low requirements)

        // Print the initial state of each form (all should be unsigned initially)
        std::cout << "=== Initial Form Status ===" << std::endl;
        std::cout << formA << std::endl;
        std::cout << formB << std::endl;
        std::cout << formC << std::endl;
        std::cout << formD << std::endl;

        // Attempt to sign Form A using John (grade 50)
        std::cout << "\n=== John tries to sign Form A ===" << std::endl;
        john.signForm(formA); // John has grade 50, which is sufficient to sign Form A
        std::cout << formA << std::endl;  // Print form status after signing

        // Attempt to sign Form B using Jane (grade 100)
        std::cout << "\n=== Jane tries to sign Form B ===" << std::endl;
        jane.signForm(formB); // Jane has grade 100, but Form B requires grade 50 to sign, so it should fail
        std::cout << formB << std::endl;  // Print form status after failed signing attempt

        // Attempt to sign Form C using Alex (grade 10)
        std::cout << "\n=== Alex tries to sign Form C ===" << std::endl;
        alex.signForm(formC); // Alex has grade 10, which is sufficient to sign Form C
        std::cout << formC << std::endl;  // Print form status after signing

        // Attempt to sign Form D using John (grade 50)
        std::cout << "\n=== John tries to sign Form D ===" << std::endl;
        john.signForm(formD); // John has grade 50, which is sufficient to sign Form D
        std::cout << formD << std::endl;  // Print form status after signing

        // Try to create a Bureaucrat with an invalid grade (too high)
        std::cout << "\n=== Try to create a Bureaucrat with an invalid grade ===" << std::endl;
        try {
            Bureaucrat invalidBureaucrat("Invalid", 0); // Grade 0 is invalid (too high)
        } catch (const std::exception& e) {
            std::cout << "Error: " << e.what() << std::endl;  // Catch and display the exception
        }

        // Try to create a Form with invalid grade (too low)
        std::cout << "\n=== Try to create a Form with an invalid grade ===" << std::endl;
        try {
            Form invalidForm("Invalid Form", 0, 50);  // Grade 0 is invalid (too high)
        }
        catch (const std::exception& e) {
            std::cout << "Error: " << e.what() << std::endl;  // Catch and display the exception
        }

        // Final check of all forms
        std::cout << "\n=== Final Form Status ===" << std::endl;
        std::cout << formA << std::endl; // Should be signed
        std::cout << formB << std::endl; // Should not be signed
        std::cout << formC << std::endl; // Should be signed
        std::cout << formD << std::endl; // Should be signed

    } catch (const std::exception& e) {
        std::cerr << "Unexpected error: " << e.what() << std::endl;
    }

    return 0;
}
