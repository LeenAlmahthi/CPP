/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalmahth <lalmahth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:41:50 by lalmahth          #+#    #+#             */
/*   Updated: 2025/10/07 16:41:51 by lalmahth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
 
int PhoneBook::contact_index = 0;

    PhoneBook::PhoneBook (){
        PhoneBook::contact_index = 0;
        PhoneBook::flag = -1;
    }
    PhoneBook::PhoneBook (std::string s){
        PhoneBook::contact_index = 0;
        PhoneBook::flag = -1;
        PhoneBook::type = s;
    }

int    PhoneBook::get_index_number(PhoneBook& my_book)
{
    return (my_book.contact_index);
}
int    PhoneBook::get_flag(PhoneBook& my_book)
{
    return (my_book.flag);
}
void    PhoneBook::set_flag(PhoneBook& my_book)
{
    my_book.flag = 1;
}
void    PhoneBook::set_index_number(PhoneBook& my_book)
{
    my_book.contact_index++;
    if (my_book.contact_index >= 8)
    {
        my_book.contact_index = 0;
        my_book.set_flag(my_book);
    }
}

int   PhoneBook::sreach_display(PhoneBook& my_book)
{
    std::string s;
    int num;
    int len_list;
    if (my_book.get_flag(my_book) == 1)
        len_list = 8;
    else
        len_list = my_book.get_index_number(my_book);
    std::cout<< std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << "\n";
    for (int i =0; i < len_list;i++)
    {
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << fill_search(my_book.contacts[i].get_name()) << "|"; 
        std::cout << std::setw(10) << fill_search(my_book.contacts[i].get_last_name()) << "|"; 
        std::cout << std::setw(10) << fill_search(my_book.contacts[i].get_nickname());
        std::cout << std::endl;
    }
    while (1)
    {
        std::cout << "> Enter a index of search table ";
        getline(std::cin,s);
        if (!std::cin)
            return(0);
        num = get_num(s);
        if (num == -1 || num >= len_list )
            std::cout << "❗ Enter index from [0, " << len_list -1 << "]" << std::endl;
        else if (num < len_list) 
            break;
    }
    std::cout << "name: " << contacts[num].get_name()<< std::endl; 
    std::cout << "last name: " <<contacts[num].get_last_name()<< std::endl; 
    std::cout << "nickname: " << contacts[num].get_nickname() << std::endl; 
    std::cout << "phone number: " << contacts[num].get_phone_number()<< std::endl; 
    std::cout << "darkest secret.: " << contacts[num].get_darkestSecret()<< std::endl; 
    return (1);
}
void    PhoneBook::ft_print (PhoneBook data)
{
    int len_list;
    if (data.get_flag(data) == 1)
        len_list = 7;
    else
        len_list = data.get_index_number(data);
    for (int i =0; i <=len_list;i++)
    {
         std::cout << "name: " << contacts[i].get_name()<< std::endl; 
    std::cout << "last name: " <<contacts[i].get_last_name()<< std::endl; 
    std::cout << "nickname: " << contacts[i].get_nickname() << std::endl; 
    std::cout << "phone number: " << contacts[i].get_phone_number()<< std::endl; 
    std::cout << "darkest secret.: " << contacts[i].get_darkestSecret()<< std::endl; 
    }
    
}
void    PhoneBook::fill_nickname(PhoneBook& my_book)
{
    std::string name;
    while (1)
    {
        std::cout << "Enter Nickname:"<< " ";
        std::getline(std::cin,name);
        if (!std::cin)
            exit(0);
        if (name.empty())
            std::cout << "❌ Enter a valid Nickname"<< std::endl;
        else 
            break;
    }
    PhoneBook::fill_contact_data(my_book.contacts[my_book.contact_index],name,2);
}
void    PhoneBook::fill_darkestSecret(PhoneBook& my_book)
{
    std::string name;
    while (1)
    {
        std::cout << "Enter DarkestSecret:"<< " ";
        std::getline(std::cin,name);
        if (!std::cin)
            exit(0);
        if (name.empty())
            std::cout << "❌ Enter a valid DarkestSecret"<< std::endl;
        else 
            break;
    }
    PhoneBook::fill_contact_data(my_book.contacts[my_book.contact_index],name,4);
}
void    PhoneBook::fill_data_number(PhoneBook& my_book)
{
    std::string name;
    while (1)
    {
        std::cout << "Enter Phone_number:"<< " ";
        std::getline(std::cin,name);
        if (!std::cin)
            exit(0);
        if (is_num(name))
            break;
        else 
             std::cout << "❌ Enter with numaric char"<< std::endl;
    }
    PhoneBook::fill_contact_data(my_book.contacts[my_book.contact_index],name,3);
}
void    PhoneBook::fill_data_last_named(PhoneBook& my_book)
{
    std::string name;
    while (1)
    {
        std::cout << "Enter Last Name:"<< " ";
        std::getline(std::cin,name);
        if (!std::cin)
            exit(0);
        if (is_alpha(name))
            break;
        else 
             std::cout << "❌ Enter Name with alpha char"<< std::endl;
    }
    PhoneBook::fill_contact_data(my_book.contacts[my_book.get_index_number(my_book)],name,1);
}
void    PhoneBook::fill_data_named(PhoneBook& my_book)
{
    std::string name;
    while (1)
    {
        std::cout << "Enter First Name:"<< " ";
        std::getline(std::cin,name);
        if (!std::cin)
            exit(0);
        if (is_alpha(name))
            break;
        else 
             std::cout << "❌ Enter Name with alpha char"<< std::endl;
    }
    PhoneBook::fill_contact_data(my_book.contacts[my_book.get_index_number(my_book)],name,0);
}
void PhoneBook ::fill_contact_data(Contact& pre_contact,std::string data, int i)
{
    if (i == 0)
        pre_contact.set_name(data);
    if (i == 1)
        pre_contact.set_last_name(data);
    if (i == 2)
        pre_contact.set_nickname(data);
    if (i == 3)
        pre_contact.set_phone_number(data);
    if (i == 4) 
        pre_contact.set_darkestSecret(data);
}