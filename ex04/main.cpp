/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sam <sam@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:09:48 by sam               #+#    #+#             */
/*   Updated: 2022/11/22 17:33:34 by sam              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

#include "colors.h"

int read_file(std::string param)
{
	std::ifstream	file_in_param(param);
	if(file_in_param.fail())
	{
		std::cout << BRED << "ERROR: invalid file." << RES << std::endl;
		return -1;
	}
	else
	{
		std::string line = "";
		std::ofstream 
		while (std::getline(file_in_param, line))
		{

		}
	}
	

}

int main(int ac, char **av)
{
	(void) av;
	
	if (ac != 4)
	{
		std::cout << BYEL << "You have to pass, one filename and two str as parameters." << RES << std::endl;
		return -1;
	}
	else
	{
		if (read_file(av[1]) < 0)
			return -1;


	}
}
