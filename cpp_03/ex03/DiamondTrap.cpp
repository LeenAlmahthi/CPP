
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap(){
    name = "Default";
    ClapTrap::name = "Default_clap_name";
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 30;
    std::cout << Hit_points << " " << Energy_points << " " << Attack_damage << std::endl
    std::cout << "[DiamondTrap Default constructor Created]\n";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name){
	this->name = name;
    ClapTrap::name = name + "_clap_name";
    Hit_points = FragTrap::Hit_points;
    Energy_points = ScavTrap::Energy_points;
    Attack_damage = FragTrap::Attack_damage;
    std::cout << "[DiamondTrap copy constructor Created] " << name << "\n";
}

DiamondTrap::DiamondTrap(DiamondTrap const &tmp) : ClapTrap(tmp), FragTrap(tmp), ScavTrap(tmp){
    *this = tmp; // this will call operator=
    std::cout << "[DiamondTrap Copy assignment  Constructor] " << name << "\n";
}

DiamondTrap::~DiamondTrap(){
    std::cout << "[DiamondTrap Destroyed] " << name << "\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &tmp){
    if (this != &tmp)
    {
        name = tmp.name;
        ClapTrap::name = tmp.ClapTrap::name;
        Hit_points = tmp.Hit_points;
        Energy_points = tmp.Energy_points;
        Attack_damage = tmp.Attack_damage;
    }
    return (*this);
}

void DiamondTrap::attack(const std::string& target){
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(){
	std::cout<< ClapTrap::name << "\n";
	std::cout<< name << "\n";

}