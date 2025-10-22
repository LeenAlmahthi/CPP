/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalmahth <lalmahth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:57:44 by lalmahth          #+#    #+#             */
/*   Updated: 2025/10/18 19:57:45 by lalmahth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(){
	this->name = "";
	this->we = NULL;
}
HumanB::HumanB(std::string name){
	this->name = name;
	this->we = NULL;
}
void	HumanB::setWeapon(Weapon &we)
{
	this->we = &we;
}
std::string	HumanB::getname()
{
	return (this->name); 
}
std::string	HumanB::getobj_type()
{
	return(this->we->getType());
}
void	HumanB::attack()
{
	std::cout << this->getname() << " attacks with their " << this->getobj_type() << "\n";
}