/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalmahth <lalmahth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:58:21 by lalmahth          #+#    #+#             */
/*   Updated: 2025/10/18 19:58:22 by lalmahth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}
void Harl::info(){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}
void Harl::warning(){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n";
}
void Harl::error(){
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}
void Harl::complain(std::string level){
	
	int index = -1;

	void(Harl::*ptr_type[4])() = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};
	std::string c_type[] = {"DEBUG","INFO","WARNING","ERROR"};
	for (int i = 0;i < 4;i++)
	{
		if (level == c_type[i])
		{
			index = i;
			break;
		}
	}
	switch (index)
	{
		case 0:
			std::cout<< "[DEBUG]\n";
			(this->*ptr_type[index])();
		
		case 1:
		
			std::cout<< "[INFO]\n";
			(this->*ptr_type[index])();
		
		case 2:
		
			std::cout<< "[WARNING]\n";
			(this->*ptr_type[index])();
		
		case 3:
		
			std::cout<< "[ERROR]\n";
			(this->*ptr_type[index])();
			return;
		
	}
	std::cout<<"[ Probably complaining about insignificant problems ]\n";
	return ;
}