/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book_utils.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalmahth <lalmahth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:41:47 by lalmahth          #+#    #+#             */
/*   Updated: 2025/10/07 16:41:48 by lalmahth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string    fill_search(std::string s)
{
    std::string tmp;
    if (s.length () < 10)
        return (s);
    else 
    {   
        tmp = s.substr(0,9);
        tmp += ".";
        return (tmp);
    }
}
int     get_num(std::string s)
{
    std::size_t i;
    int     index;

    i =0;
    index = -1;
    while ( i < s.length())
    {
        if (s[i] == '-' || s[i] == '+')
            return (-1);
        if ( (isdigit(s[i]) && index != -1 ) || (s[i] != ' ' && s[i] != '\t'  && index != -1))
        {
            return (-1);
        }    
        if (isdigit(s[i]) && s[i] - '0' >= 0 && s[i] - '0' <= 7)
            index = s[i] - '0';
        i++;
    }
    return (index);
}
int is_alpha(std::string str)
{
    std::size_t i;
    for (i = 0 ;i < str.length();i++)
    {
        if (!std::isalpha(str[i]) && str[i] != ' ' && str[i] != '\t')
             return 0;
    }
    if (i != 0)
        return 1;
    return 0;
}
int is_num(std::string str)
{
    std::size_t i;
    for (i = 0 ;i < str.length();i++)
    {
        if (!std::isdigit(str[i]) && str[i] != ' ' && str[i] != '\t')
             return 0;
    }
    if (i != 0)
        return 1;
    return 0;
}
int skip_whitespace(std::string line, std::string s)
{
    std::size_t i;
    std::size_t j;

    i = 0;
    j = 0;
    while (line.length() > i && (line[i] == '\t' || line[i] == ' '))
        i++;
    while (line.length() > i)
    {
        if (j == s.length() && (line[i] != ' ' && line[i] != '\t'))
            return (0);
        else if (std::isalpha(line[i]) && line[i] != s[0] && j == 0)
            return (0);
        if (line[i] == s[j] && j < s.length())
            j++;
        i++;
    }
    if (j == s.length())
        return (1);
    return (0);
}