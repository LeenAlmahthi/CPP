/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalmahth <lalmahth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:57:41 by lalmahth          #+#    #+#             */
/*   Updated: 2025/10/18 19:57:42 by lalmahth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"
class HumanA{
	private :
		std::string name;
		Weapon &we;
	public:
		HumanA(std::string name, Weapon &we);
		std::string	getname();
		std::string	getobj_type();
		void	attack();
};
#endif