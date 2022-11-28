/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:22:39 by sam               #+#    #+#             */
/*   Updated: 2022/11/28 13:51:08 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colors.h"
#include "Harl.hpp"

#include <string>
#include <iostream>

Harl::Harl()
{
	std::cout << BWHT << "Harl 's constructor called." << RES << std::endl;
	return;
}

Harl::~Harl(void)
{
	std::cout << BWHT << "Harl's destructor called." << RES << std::endl;
	return;
}

void Harl::debug(void)
{
	std::cout << BCYN << "[DEBUG]" << RES << std::endl;
	std::cout << BCYN << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !"
			  << RES << std::endl;
}

void Harl::info(void)
{
	std::cout << BYEL << "[INFO]" << RES << std::endl;
	std::cout << BYEL << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !"
			  << RES << std::endl;
}

void Harl::warning(void)
{
	std::cout << BYEL << "[WARNING]" << RES << std::endl;
	std::cout << BYEL << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
			  << RES << std::endl;
}

void Harl::error(void)
{
	std::cout << BRED << "[ERROR]" << RES << std::endl;
	std::cout << BRED << "This is unacceptable ! I want to speak to the manager now!"
			  << RES << std::endl;
}

void Harl::complain(std::string level)
{
	int i = 0;
	void (Harl::*func_list[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string level_given[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 4)
	{
		if (level == level_given[i])
		{
			(this->*(func_list[i]))();
			break;
		}
		i++;
	}
	if (i == 4)
		std::cout << BCYN << "[Probably complaining about insignificant problems]" << RES << std::endl;
}