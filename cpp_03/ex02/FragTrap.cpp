#include "FragTrap.hpp"
FragTrap::FragTrap() : ClapTrap() {
    name = "Default";
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
    std::cout << "[FragTrap Default constructor Created]\n";
}

FragTrap::FragTrap(std::string n) :ClapTrap(n){
    name = n;
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
    std::cout << "[FragTrap copy constructor Created] " << name << "\n";
}

FragTrap::FragTrap(FragTrap const &tmp) :ClapTrap(tmp){
    *this = tmp; // this will call operator=
    std::cout << "[FragTrap Copy assignment  Constructor] " << name << "\n";
}

FragTrap::~FragTrap(){
    std::cout << "[FragTrap Destroyed] " << name << "\n";
}
FragTrap& FragTrap::operator=(const FragTrap &tmp){
    if (this != &tmp)
    {
        name = tmp.name; 
        Hit_points = tmp.Hit_points;
        Energy_points = tmp.Energy_points;
        Attack_damage = tmp.Attack_damage;
    }
    return (*this);
}
void FragTrap::highFivesGuys(){

    if (this->Energy_points <= 0 || this->Hit_points <= 0)
    {
        std::cout << "FragTrap [" << name << "] cannot high five because it has no energy or is dead!\n";
        return;
    }
	std::cout << "FragTrap [" << name << "] says: High five, everyone!\n";
}