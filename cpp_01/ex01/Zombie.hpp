/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalmahth <lalmahth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:57:24 by lalmahth          #+#    #+#             */
/*   Updated: 2025/10/18 19:57:25 by lalmahth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>

class Zombie{
	private : 
	std::string  name;

	public:
	Zombie();
	Zombie(std::string s);
	~Zombie();
	void	ft_print();	
	void	set_name(std::string name);
	std::string	get_name();
};
Zombie* zombieHorde(int N, std::string name);
#endif