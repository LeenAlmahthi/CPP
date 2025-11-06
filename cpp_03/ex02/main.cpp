
#include "FragTrap.hpp"

int main()
{
    // === Test 1: FragTrap construction & inheritance ===
    FragTrap frag("Charlie");

    // === Test 2: Orthodox Canonical Form (copy & assignment) ===
    FragTrap copyFrag(frag);        // copy constructor
    FragTrap assignFrag("Dummy");
    assignFrag = frag;              // copy assignment

    // === Test 3: Normal behavior ===
    std::cout << "\n--- Normal Actions ---\n";
    frag.attack("Bob");
    frag.takeDamage(30);
    frag.beRepaired(20);
    frag.highFivesGuys();  // FragTrap special ability

    // === Test 4: After death (HP = 0) ===
    std::cout << "\n--- After Death ---\n";
    frag.takeDamage(100);   // HP = 0
    frag.attack("Bob");     // should do nothing
    frag.beRepaired(10);    // should do nothing
    frag.highFivesGuys();   // should do nothing

    // === Test 5: Energy depletion (HP > 0, EP = 0) ===
    std::cout << "\n--- Energy Depletion ---\n";
    FragTrap lowE("LowE");
    for (int i = 0; i < 100; ++i)   // FragTrap has 100 energy points
        lowE.attack("Target");       // drains energy
    lowE.beRepaired(10);             // should do nothing
    lowE.highFivesGuys();            // should do nothing

    // Destructors auto-called in reverse order
    return 0;
}
