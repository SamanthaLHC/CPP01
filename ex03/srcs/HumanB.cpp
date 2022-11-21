/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:33:35 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/21 17:00:53 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include "colors.h"
#include <string>
#include <iostream>

// here implem a ptr on weapon

HumanB::HumanB(std::string chara_name) : _name(chara_name)
{
	std::cout << BWHT << "HumanB's contruct called." << RES << std::endl;
	return;
}

HumanB::~HumanB(void)
{
	std::cout << BWHT << "HumanB's destructor called." << RES << std::endl;
	return;
}

std::string HumanB::setWeapon(Weapon inst_weapon)
{
	this->_weapon_dup = &inst_weapon;
	if (this->_weapon_dup == NULL)
		return NULL;
	return this->_weapon_dup->getType();
}

void HumanB::attack(void)
{
	
	std::cout << BGRN << this->_name << " attacks with their " << 
 		 << RES << std::endl;
}
