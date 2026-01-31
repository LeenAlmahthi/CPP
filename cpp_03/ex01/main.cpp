#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("Serena");

    ScavTrap copyScav(scav);          
    ScavTrap assignScav("Dummy");
    assignScav = scav;               

    std::cout << "\n--- Normal Actions ---\n";
    scav.attack("Bob");
    scav.takeDamage(20);
    scav.beRepaired(20);
    scav.guardGate();

    std::cout << "\n--- After Death ---\n";
    scav.takeDamage(100);  
    scav.attack("Bob");     
    scav.beRepaired(5);    
    scav.guardGate();     

    std::cout << "\n--- Energy Depletion ---\n";
    ScavTrap lowE("LowE");
    for (int i = 0; i < 50; ++i)
        lowE.attack("Target");  
    lowE.beRepaired(10);        
    lowE.guardGate();           

    return 0;
}
