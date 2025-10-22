/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalmahth <lalmahth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:41:55 by lalmahth          #+#    #+#             */
/*   Updated: 2025/10/07 16:41:56 by lalmahth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "contact.hpp"
class PhoneBook {
    
    private :
    static int contact_index;
    int    flag;
    std::string type;
    Contact contacts[8];
    public :
    PhoneBook();
    PhoneBook (std::string s);
    int     get_index_number(PhoneBook& my_book);
    int     get_flag(PhoneBook& my_book);
    void    set_flag(PhoneBook& my_book);
    void    fill_data_named(PhoneBook& my_book);
    void    fill_data_last_named(PhoneBook& my_book);
    void    fill_data_number(PhoneBook& my_book);
    void    fill_nickname(PhoneBook& my_book);
    void    fill_contact_data(Contact& pre_contact,std::string data, int i);
    void    fill_darkestSecret(PhoneBook& my_book);
    void    ft_print(PhoneBook data);
    void    set_index_number(PhoneBook& my_book);
    int    sreach_display(PhoneBook& my_book);
    void determent_type(std::string s);
};

int is_alpha(std::string str);
int skip_whitespace(std::string line, std::string s);
int is_num(std::string str);
int     get_num(std::string s);
std::string    fill_search(std::string s);
#endif