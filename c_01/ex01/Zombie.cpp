/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalmahth <lalmahth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:57:20 by lalmahth          #+#    #+#             */
/*   Updated: 2025/10/18 19:57:21 by lalmahth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string s) : name(s){
	std::cout<<  "Zombie "<< s << " created\n";
};
Zombie::Zombie(){
	this->name = "";
}
Zombie::~Zombie(){
	std::cout<<  "Zombie "<< this->name << " destroyed\n";
}
void	Zombie::set_name(std::string name){
	this->name = name;
}
std::string	Zombie::get_name(){
	return (this->name);
}