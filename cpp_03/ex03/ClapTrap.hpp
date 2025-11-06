#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
	protected : 
		std::string name;
		int  Hit_points;
		int Energy_points;
		int Attack_damage;
		static const int _Hit_points = 10;
		static const int _Energy_points = 10;
		static const int _Attack_damage = 0;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &tmp);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &tmp);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
};
#endif