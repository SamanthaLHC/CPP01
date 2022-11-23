/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sam <sam@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:09:48 by sam               #+#    #+#             */
/*   Updated: 2022/11/23 11:38:37 by sam              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

#include "colors.h"

int main(int ac, char **av)
{
	(void)av;

	if (ac != 4)
	{
		std::cout << BYEL << "You have to pass, one filename and two str as parameters." << RES 
		<< std::endl;
		return -1;
	}
	else
	{
		std::ifstream file_in_param(av[1]);
		if (file_in_param.fail())
		{
			std::cout << BRED << "ERROR: invalid file." << RES << std::endl;
			return -1;
		}
		else
		{
			std::string line = "";
			std::string new_file_name = std::string(av[1]) + ".replace";
			std::ofstream new_file(new_file_name.c_str(), std::ios::out | std::ios::trunc);
			if (new_file.fail())
			{	
				std::cout << BRED << "ERROR: file could not be created." << RES << std::endl;
				return -1;
			}
			while (std::getline(file_in_param, line))
			{
				std::string::size_type size_of_str1;
				size_of_str1 = std::string(av[2]).length();
				// quelle pos donnee a erase d ou ca vient et pourquoi ca pete ?
				std::string::size_type pos = 0;
				while(line.find(av[2]) != std::string::npos)
				{
					pos = line.find(av[2]);
					line.erase(pos, size_of_str1);
					line.insert(pos, std::string(av[3]));
				}
				new_file << line;
				if (!file_in_param.eof())
					new_file << std::endl;
			}
		}
	}
	return 0;
}