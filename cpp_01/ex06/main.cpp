/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalmahth <lalmahth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:58:27 by lalmahth          #+#    #+#             */
/*   Updated: 2025/10/18 19:58:28 by lalmahth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int argc,char  **argv)
{
	
	if (argc != 2)
	{
		std::cout << "Enter one from this [DEBUG,INFO,WARNIN0,ERRORG]\n";
		return (1);
	}
	Harl harl;
	harl.complain(argv[1]);
	return (0);
}