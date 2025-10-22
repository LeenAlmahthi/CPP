/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalmahth <lalmahth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:57:38 by lalmahth          #+#    #+#             */
/*   Updated: 2025/10/18 19:57:39 by lalmahth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &we) : we(we){
			this->name = name;
		}
std::string	HumanA::getname()
{
	return (this->name); 
}
std::string	HumanA::getobj_type()
{
	return(this->we.getType());
}
void		HumanA::attack()
{
	std::cout << this->getname() << " attacks with their " << this->getobj_type() << "\n";
}