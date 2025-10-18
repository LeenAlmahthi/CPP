/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalmahth <lalmahth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:41:44 by lalmahth          #+#    #+#             */
/*   Updated: 2025/10/07 16:41:45 by lalmahth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void fill_data(PhoneBook& my_book)
{
    my_book.fill_data_named(my_book);
    my_book.fill_data_last_named(my_book);
    my_book.fill_data_number(my_book);
    my_book.fill_nickname(my_book);
    my_book.fill_darkestSecret(my_book);
    my_book.set_index_number(my_book);
}

int main ()
{
    std::string str;
    PhoneBook p_book;
    while (1)
    {
        std::cout << "> ";
        getline(std::cin,str);
        if (!std::cin)
            return (0);
        if (skip_whitespace(str,"ADD"))
            fill_data(p_book);
        else if (skip_whitespace(str,"SEARCH") && p_book.get_index_number(p_book) == 0 && p_book.get_flag(p_book) == -1)
        {
            std::cout << "❗The search bar was empty"<< std::endl;
            continue;
        }    
        else if (skip_whitespace(str,"SEARCH"))
        {
            if (!p_book.sreach_display(p_book))
                return (0);
        }
        else if (skip_whitespace(str,"EXIT"))
            return (0);
        else
            std::cout << "Enter between this command [EXIT, ADD, SEARCH]"<< std::endl;
    }
    return (0);
}
