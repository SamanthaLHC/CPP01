/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:33:43 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/21 14:01:58 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "colors.h"

// ublic:

// 	~Weapon();

// 	void setType(std::string other_weapon);
	
// private:
// 	std::string _type;

Weapon::Weapon(std::string weapon_description) : _type(weapon_description)
{
	std::cout << BWHT << "Weapon 's constructor called." << RES << std::endl;
	return;
}

Weapon::~Weapon(void)
{
	std::cout << BWHT << "Weapon's destructor called." << RES << std::endl;
	return;
}

std::string& Weapon::getType(void) const
{
	
}

void setType(std::string other_weapon)
{
	
}

