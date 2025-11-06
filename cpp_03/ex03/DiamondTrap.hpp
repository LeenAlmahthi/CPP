#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
class DiamondTrap : public FragTrap, public ScavTrap{
	private:
		std::string name;
	public : 
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &tmp);
		~DiamondTrap();
		DiamondTrap& operator=(const DiamondTrap &tmp);
		void attack(const std::string& target);
		void whoAmI();

};
#endif