/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalmahth <lalmahth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:57:08 by lalmahth          #+#    #+#             */
/*   Updated: 2025/10/18 19:57:09 by lalmahth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>

class Zombie {
	private : 
	std::string  name;

	public:
	Zombie();
	Zombie(std::string s);
	~Zombie();
	void	ft_print();	
	void	announce();
	void	set_name(std::string name);
	void	destroy_object();
	std::string	get_name();
};
void	randomChump(std::string name);
Zombie*	newZombie(std::string name);
#endif