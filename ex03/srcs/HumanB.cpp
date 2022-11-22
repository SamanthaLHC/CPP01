/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sam <sam@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:33:35 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/22 12:57:34 by sam              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include "colors.h"
#include <string>
#include <iostream>

// here implem a ptr on weapon

HumanB::HumanB(std::string chara_name) : _weapon_dup(NULL), _name(chara_name)
{
	std::cout << BWHT << "HumanB's contruct called." << RES << std::endl;
	return;
}

HumanB::~HumanB(void)
{
	std::cout << BWHT << "HumanB's destructor called." << RES << std::endl;
	return;
}

void HumanB::setWeapon(Weapon& inst_weapon)
{
	this->_weapon_dup = &inst_weapon;
	return;
}

void HumanB::attack(void)
{
	if (this->_weapon_dup == NULL)
		std::cout << BRED << this->_name << " attacks with their FISTS " << RES << std::endl;
	else
		std::cout << BGRN << this->_name << " attacks with their " << this->_weapon_dup->getType() << RES << std::endl;
}
