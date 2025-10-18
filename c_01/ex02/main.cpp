/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalmahth <lalmahth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:57:31 by lalmahth          #+#    #+#             */
/*   Updated: 2025/10/18 19:57:32 by lalmahth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main ()
{
	std::string str = "HI THIS IS BRAIN";
	std::string	*PTR = &str;
	std::string	&REF = str;

	std::cout << "The memory address of the string variable :" << &str << "\n";
	std::cout << "The memory address held by stringPTR :" << &PTR << "\n";
	std::cout << "The memory address held by stringREF :" << &REF << "\n";

	std::cout << "The value of the string variable: " << str << "\n";
	std::cout << "The value pointed to by stringPTR: " << *PTR << "\n";
	std::cout << "The value pointed to by stringPTR: " << REF << "\n";

	return (0);
}