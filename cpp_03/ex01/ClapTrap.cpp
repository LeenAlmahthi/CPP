#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    name = "Default";
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
    std::cout << "[ClapTrap Default constructor Created]\n";
}

ClapTrap::ClapTrap(std::string name){
    this->name = name;
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
    std::cout << "[ClapTrap constructor Created] " << name << "\n";
}

ClapTrap::ClapTrap(ClapTrap const &tmp){
    *this = tmp; // this will call operator=
    std::cout << "[ClapTrap Copy assignment Constructor] " << name << "\n";
}

ClapTrap::~ClapTrap(){
    std::cout << "[ClapTrap Destroyed] " << name << "\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap &tmp){
    if (this != &tmp)
    {
        name = tmp.name; 
        Hit_points = tmp.Hit_points;
        Energy_points = tmp.Energy_points;
        Attack_damage = tmp.Attack_damage;
    }
    // std::cout << "[ClapTrap Copy Assignment] " << name << "\n";
    return (*this);
}

void ClapTrap::attack(const std::string& target){

    if (this->Energy_points <= 0 || this->Hit_points <= 0)
    {
        if (this->Energy_points <= 0)
            std::cout << "ClapTrap: " << name << " cannot attack  it has no energy left!\n";
        else 
            std::cout << "ClapTrap: " << name << " cannot attack  it has no hit points!\n";
        return;
    }
    this->Energy_points--;
    std::cout << "ClapTrap: [" << name << "] attacks "  << target << ", causing " << Attack_damage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount){
    
    if (Hit_points > 0 || Energy_points > 0)
        std::cout << "[" << name << "] takes "  << amount << " points of damage!\n";
    if (Hit_points <= 0 || Energy_points <= 0)
    {
        if (this->Energy_points <= 0)
        std::cout << "ClapTrap: " << name << " cannot attack  it has no energy left!\n";
        else 
        std::cout << "ClapTrap: " << name << " cannot attack  it has no hit points!\n";
        return;
    }
    this->Hit_points -= amount; 
    
}
void ClapTrap::beRepaired(unsigned int amount){
    
    if (this->Energy_points <= 0 || this->Hit_points <= 0)
    {
        if (this->Energy_points <= 0)
        std::cout << "ClapTrap: " << name << " cannot repair it has no energy left!\n";
        else 
        std::cout << "ClapTrap: " << name << " cannot repair it has no hit points!\n";
        return;
    }
    this->Energy_points--;
    this->Hit_points += amount;
    std::cout << "[" << name << "] is repaired by "  << amount << " points!\n";
}