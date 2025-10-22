/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalmahth <lalmahth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:57:53 by lalmahth          #+#    #+#             */
/*   Updated: 2025/10/18 19:57:54 by lalmahth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
	this->type = "test";
};
Weapon::Weapon(std::string str){
	this->type = str;
};
std::string Weapon::getType()
{
	return (this->type);
};
void	Weapon::setType(std::string s)
{
	this->type = s;
};