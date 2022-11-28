/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:09:48 by sam               #+#    #+#             */
/*   Updated: 2022/11/28 13:39:56 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

#include "colors.h"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << BYEL << "You have to pass one filename and two str as parameters." << RES
				  << std::endl;
		return -1;
	}
	std::ifstream file_in_param(av[1]);
	// if (file_in_param.fail() || file_in_param.peek() == EOF)
	if (file_in_param.fail())
	{
		std::cout << BRED << "ERROR: invalid file." << RES << std::endl;
		return -1;
	}
	std::string line = "";
	std::string tmp_buff = "";
	std::string new_file_name = std::string(av[1]) + ".replace";
	std::ofstream new_file(new_file_name.c_str(), std::ios::out | std::ios::trunc);
	if (new_file.fail())
	{
		std::cout << BRED << "ERROR: file could not be created." << RES << std::endl;
		return -1;
	}
	while (std::getline(file_in_param, tmp_buff))
	{
		line += tmp_buff;
		if (!file_in_param.eof())
			line+="\n";
	}
	std::string::size_type size_of_str1 = std::string(av[2]).length();
	std::string::size_type pos = 0;
	while (size_of_str1 > 0 && line.find(av[2]) != std::string::npos)
	{
		pos = line.find(av[2]);
		line.erase(pos, size_of_str1);
		line.insert(pos, std::string(av[3]));
	}
	new_file << line;

	return 0;
}