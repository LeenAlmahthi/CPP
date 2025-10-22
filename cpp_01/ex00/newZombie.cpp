/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalmahth <lalmahth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:57:00 by lalmahth          #+#    #+#             */
/*   Updated: 2025/10/18 19:57:01 by lalmahth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp" 

Zombie*	newZombie(std::string name){
	
	Zombie *test = new Zombie();
	test->set_name(name);
	std::cout << test->get_name() << " created\n";
	test->announce();
	return (test);
}