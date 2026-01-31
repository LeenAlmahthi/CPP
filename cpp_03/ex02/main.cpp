
#include "FragTrap.hpp"

int main()
{
    FragTrap frag("Charlie");
    FragTrap copyFrag(frag);        
    FragTrap assignFrag("Dummy");
    assignFrag = frag;          

    std::cout << "\n--- Normal Actions ---\n";
    frag.attack("Bob");
    frag.takeDamage(30);
    frag.beRepaired(20);
    frag.highFivesGuys(); 

    std::cout << "\n--- After Death ---\n";
    frag.takeDamage(100);   
    frag.attack("Bob");     
    frag.beRepaired(10);    
    frag.highFivesGuys();   
    std::cout << "\n--- Energy Depletion ---\n";
    FragTrap lowE("LowE");
    for (int i = 0; i < 100; ++i)   
        lowE.attack("Target");       
    lowE.beRepaired(10);             
    lowE.highFivesGuys();           
    return 0;
}
