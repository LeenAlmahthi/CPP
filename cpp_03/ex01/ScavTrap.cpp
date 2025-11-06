#include "ScavTrap.hpp"
ScavTrap::ScavTrap() : ClapTrap() {
    name = "Default";
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
    std::cout << "[ScavTrap Default constructor Created]\n";
}

ScavTrap::ScavTrap(std::string n) :ClapTrap(n){
    name = n;
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
    std::cout << "[ScavTrap constructor Created] " << name << "\n";
}

ScavTrap::ScavTrap(ScavTrap const &tmp) :ClapTrap(tmp){
    *this = tmp; // this will call operator=
    std::cout << "[ScavTrap Copy assignment Constructor] " << name << "\n";
}

ScavTrap::~ScavTrap(){
    std::cout << "[ScavTrap Destroyed] " << name << "\n";
}
ScavTrap& ScavTrap::operator=(const ScavTrap &tmp){
    if (this != &tmp)
    {
        name = tmp.name; 
        Hit_points = tmp.Hit_points;
        Energy_points = tmp.Energy_points;
        Attack_damage = tmp.Attack_damage;
    }
    // std::cout << "[ScavTrap Copy Assignment] " << name << "\n";
    return (*this);
}
void ScavTrap::attack(const std::string& target){

    if (this->Energy_points <= 0 || this->Hit_points <= 0)
    {
        if (this->Energy_points <= 0)
        std::cout << "ClapTrap: " << name << " cannot attack  it has no energy left!\n";
        else 
        std::cout << "ClapTrap: " << name << " cannot attack  it has no hit points!\n";
        return;
    }
    this->Energy_points--;
    std::cout << "ScavTrap: [" << name << "] attacks "  << target << ", causing " << Attack_damage << " points of damage\n";
}

void ScavTrap::guardGate(){
    
    if (this->Energy_points <= 0 || this->Hit_points <= 0)
    {
        std::cout << "ScavTrap is now in Gate keeper mode (dead)\n";
        return;
    }
    std::cout << "ScavTrap is now in Gate keeper mode\n";
}