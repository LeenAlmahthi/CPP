/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalmahth <lalmahth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:57:26 by lalmahth          #+#    #+#             */
/*   Updated: 2025/10/18 19:57:27 by lalmahth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp" 

Zombie* zombieHorde(int N, std::string name){
	
	Zombie *node;
	int	i;
	i = 0;
	node = new Zombie[N];
	while (i < N)
	{
		node[i].set_name(name);
		std::cout << "Zombie "<< node[i].get_name() << ": BraiiiiiiinnnzzzZ...\n";
		i++;
	}
	return (node);
}