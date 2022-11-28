/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:33:32 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/28 12:58:15 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include "colors.h"

// here use ref

HumanA::HumanA(std::string chara_name, Weapon& inst_weapon) : _name(chara_name),
		_weapon(inst_weapon)
{	
	std::cout << BWHT << "HumanA's contruct called." << RES << std::endl;
	return;
}

HumanA::~HumanA(void)
{
	std::cout << BWHT << "HumanA's destructor callled." << RES << std::endl;
	return;
}

void HumanA::attack(void) const
{
	std::cout << BGRN << this->_name << " attacks with their " <<
	 this->_weapon.getType() << RES << std::endl;
}