/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalmahth <lalmahth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:56:54 by lalmahth          #+#    #+#             */
/*   Updated: 2025/10/18 19:56:55 by lalmahth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
	randomChump("leen ghnaim");
	Zombie *test_2 = newZombie("2004");
	test_2->destroy_object();
	return (0);
}