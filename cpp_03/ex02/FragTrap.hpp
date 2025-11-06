#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public : 
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &tmp);
		~FragTrap();
		FragTrap& operator=(const FragTrap &tmp);
		void highFivesGuys(void);


};
#endif