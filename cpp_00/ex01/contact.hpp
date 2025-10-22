/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalmahth <lalmahth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:41:41 by lalmahth          #+#    #+#             */
/*   Updated: 2025/10/07 16:41:42 by lalmahth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define  CONTACT_H
#include <iostream>
#include <string.h>
#include <cstdlib>
#include <iomanip>  

class Contact 
{
    private :
    std::string  first_name;
    std::string  last_name;
    std::string  nickname;
    std::string  phone_number;
    std::string  darkestSecret;
    public:
    // void    fill_contact_data(Contact& pre_contact, std::string data, int i);
    std::string     get_name();
    std::string     get_last_name();
    std::string     get_nickname();
    std::string     get_phone_number();
    std::string     get_darkestSecret();
    void    set_name(std::string s);
    void    set_last_name(std::string s);
    void    set_nickname(std::string s);
    void    set_phone_number(std::string s);
    void    set_darkestSecret(std::string s);
    
};
#endif
