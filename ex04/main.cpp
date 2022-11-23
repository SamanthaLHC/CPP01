/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samantha <samantha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:09:48 by sam               #+#    #+#             */
/*   Updated: 2022/11/22 20:50:50 by samantha         ###   ########.fr       */
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
		std::cout << BYEL << "You have to pass, one filename and two str as parameters." << RES << std::endl;
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
			while (std::getline(file_in_param, line))
			{
				// / traiter le contenu de line : chercher s1 (find? compare?)
				std::string::size_type size_of_str;
				size_of_str = std::string(av[2]).length();
				// pos = line.find(av[2]);
				std::string::size_type pos = line.find(av[2]);
				std::string str1 = line.substr(pos + size_of_str); // the part after the av2
				std::string str2 = line.substr(0, pos);	 // the part till the spline

				std::string replace_line = str1 + std::string(av[3]) + str2;
				std::cout << replace_line << std::endl;
				// créer un tableau de str oú stocker chaque résultat (replace_line[0])
				// tant que toutes les occurences sont identifiées ds une ligne.
				// concatener en intercalant le nouveau mot.

				// écrire la ligne finale dans le new_file.
			}
		}
	}
}