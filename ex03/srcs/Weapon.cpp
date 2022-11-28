/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:33:43 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/28 12:56:12 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "colors.h"

Weapon::Weapon(std::string weapon_description) : _type(weapon_description)
{
	std::cout << BWHT << "Weapon 's constructor called with :" << this->_type
			  << RES << std::endl;
	return;
}

Weapon::~Weapon(void)
{
	std::cout << BWHT << "Weapon's destructor called : " << this->_type << RES << std::endl;
	return;
}

const std::string &Weapon::getType(void) const
{
	return this->_type;
}

void Weapon::setType(std::string other_weapon)
{
	this->_type = other_weapon;
}
