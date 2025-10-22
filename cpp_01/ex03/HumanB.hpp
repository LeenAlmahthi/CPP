/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalmahth <lalmahth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:57:46 by lalmahth          #+#    #+#             */
/*   Updated: 2025/10/18 19:57:47 by lalmahth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"
class HumanB{
	private :
		std::string name;
		Weapon *we;
	public:
		HumanB();
		HumanB(std::string name);
		std::string	getname();
		std::string	getobj_type();
		void	setWeapon(Weapon &we);
		void	attack();
};
#endif