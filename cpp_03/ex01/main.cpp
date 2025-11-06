#include "ScavTrap.hpp"

int main()
{
    // === Test 1: ScavTrap construction & inheritance ===
    ScavTrap scav("Serena");

    // === Test 2: Orthodox Canonical Form (OCF) ===
    ScavTrap copyScav(scav);          // copy constructor
    ScavTrap assignScav("Dummy");
    assignScav = scav;                // copy assignment

    // === Test 3: Normal behavior ===
    std::cout << "\n--- Normal Actions ---\n";
    scav.attack("Bob");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();

    // === Test 4: After death (HP = 0) ===
    std::cout << "\n--- After Death ---\n";
    scav.takeDamage(100);  // HP = 0
    scav.attack("Bob");    // should do nothing
    scav.beRepaired(5);    // should do nothing
    scav.guardGate();      // should do nothing

    // === Test 5: Energy depletion (HP > 0, EP = 0) ===
    std::cout << "\n--- Energy Depletion ---\n";
    ScavTrap lowE("LowE");
    for (int i = 0; i < 50; ++i)
        lowE.attack("Target");  // drains all 50 energy
    lowE.beRepaired(10);        // should do nothing (no energy)
    lowE.guardGate();           // should still work? (PDF doesn't say it costs energy)

    // Destructors auto-called in reverse order
    return 0;
}

// int main() {
//     std::cout << "=== Default Constructor ===\n";
//     ScavTrap a; // Default constructor
//     // Expected: [ScavTrap Created] destructor

//     std::cout << "\n=== Parameterized Constructor ===\n";
//     ScavTrap b("Alice"); // Name constructor
//     // Expected: [ScavTrap Created] Alice

//     std::cout << "\n=== Copy Constructor ===\n";
//     ScavTrap c(b); // Copy constructor
//     // Expected: [Copy Assignment] Alice
//     //           [Copy Constructor] Alice

//     std::cout << "\n=== Copy Assignment ===\n";
//     a = c; // Assignment operator
//     // Expected: [Copy Assignment] Alice

//     std::cout << "\n=== Destructor Calls ===\n";
//     c.attack("Leen");
//     c.ClapTrap::attack("Leen");
//     return 0;
//     // Expected on exit (order may vary): 
//     // [ScavTrap Destroyed] Alice
//     // [ScavTrap Destroyed] Alice
//     // [ScavTrap Destroyed] Alice
// }
