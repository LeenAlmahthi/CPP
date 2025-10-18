/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalmahth <lalmahth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:41:38 by lalmahth          #+#    #+#             */
/*   Updated: 2025/10/07 16:41:39 by lalmahth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string Contact::get_name()
{
    return (first_name);
}
std::string Contact::get_last_name()
{
    return (last_name);
}
std::string Contact::get_nickname()
{
    return (nickname);
}
std::string Contact::get_phone_number()
{
    return (phone_number);
}
std::string Contact::get_darkestSecret()
{
    return (darkestSecret);
}
void Contact::set_name(std::string s)
{
    this->first_name = s;
}
void Contact::set_last_name(std::string s)
{
    last_name = s;
}
void Contact::set_nickname(std::string s)
{
    nickname =s;
}
void Contact::set_phone_number(std::string s)
{
    phone_number = s;
}
void Contact::set_darkestSecret(std::string s)
{
    darkestSecret = s;
}

