#include "ClapTrap.hpp"

int main() {
    std::cout << "--- Creating ClapTrap with parameterized constructor ---\n";
    ClapTrap a("Alpha");  // Parameterized constructor
    ClapTrap b("Bravo");  // Parameterized constructor

    std::cout << "\n--- Creating ClapTrap with copy constructor ---\n";
    ClapTrap c(b);        // Copy constructor

    std::cout << "\n--- Creating ClapTrap with default constructor ---\n";
    ClapTrap d;           // Default constructor

    std::cout << "\n--- Testing attacks ---\n";
    a.attack("Target1");
    b.attack("Target2");

    std::cout << "\n--- Testing taking damage ---\n";
    a.takeDamage(5);
    b.takeDamage(15);

    std::cout << "\n--- Testing repair ---\n";
    a.beRepaired(3);
    b.beRepaired(10);

    std::cout << "\n--- Testing edge cases ---\n";
    ClapTrap e("Charlie");
    e.takeDamage(10);
    e.attack("Enemy");
    e.beRepaired(5);

    std::cout << "\n--- End of test ---\n";
    return 0;
}

