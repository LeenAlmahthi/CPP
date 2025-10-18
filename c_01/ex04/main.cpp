/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalmahth <lalmahth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:58:00 by lalmahth          #+#    #+#             */
/*   Updated: 2025/10/18 19:58:01 by lalmahth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fcntl.h>
#include <string.h> 
#include <fstream> 

void	read_fill_data(std::ifstream &file, std::ofstream &outfile, std::string s, std::string s2)
{
	std::string line;
	std::string tmp;

	while (std::getline(file,line))
	{
		while (line.find(s,0) != std::string::npos)
		{
			tmp = line.substr(0,line.find(s,0));
			tmp += s2;
			tmp += line.substr(line.find(s,0) + s.length(),line.length());;
			line = tmp;
		}
		outfile << line << "\n"; 
	}
}

int check_valid_input(int argc, char **argv)
{
	std::string empty = "";
	if (argc != 4)
	{
		std::cout << argc << "Error: in argumnet number\n";
		return (1);
	}
	if (!argv[2] || !argv[3] || argv[2] == empty || argv[3] == empty)
	{
		std::cout << "Error: fill the string name correct\n"; 
		return (1);
	}
	return (0);
}

int main (int argc,char  **argv)
{
	
	if (check_valid_input(argc,argv))
		return (1);
	std::string s = ".replace";
	std::string name_file = argv[1] + s;
	const char *q = name_file.c_str(); // too convert the string to a const char * because the c++98 take with a (ofstream/ifstream) only a char *
	std::ifstream file(argv[1]);
	if (!file)
	{
		std::cout << "Error: can't open file\n";
		return (1);
	}  
	std::ofstream out_file(q);
	read_fill_data(file,out_file,argv[2],argv[3]);
	out_file.close();
	file.close();
	return (0);
}