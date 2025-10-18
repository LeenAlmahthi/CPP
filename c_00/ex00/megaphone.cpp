/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalmahth <lalmahth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:41:16 by lalmahth          #+#    #+#             */
/*   Updated: 2025/10/07 16:41:17 by lalmahth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main(int argc,char **argv)
{
    int i;
    int j;
    j = 1;
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
        return (1);
    }
    while (j < argc)
    {
        i = 0;
        while (argv[j][i] != '\0')
        {
          std::cout<< (char)std::toupper(argv[j][i]);
          i++;
        }
        j++;
        std::cout << " ";
    }
    std::cout << std::endl;
    return 0;
}
