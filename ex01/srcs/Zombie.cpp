/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:26:22 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/18 15:39:04 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	std::cout << BWHT << " ---- A ZOMBIE APPEARS ! ----" << RES << std::endl;
	return;
}

Zombie::~Zombie()
{
	std::cout << BWHT << this->_name << ", le zombie, is dead... HEADSHOT!" << RES << std::endl;
	return;
}

std::string Zombie::get_name(void)const
{
	return this->_name;
}

void Zombie::set_name(std::string zombie_name)
{
	this->_name = zombie_name;
}

void Zombie::announce(void)
{
	std::cout << BRED <<  get_name() << ": BraiiiiiiinnnzzzZ..." << RES << std::endl;
}
