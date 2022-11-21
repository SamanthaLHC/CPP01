/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:33:25 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/21 17:02:06 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANB_HPP
#define HUMANB_HPP

// here implem a ptr on weapon
class HumanB
{

public:

	HumanB(std::string chara_name);
	~HumanB();

	std::string setWeapon(Weapon inst_weapon);
	void attack(void);

private:
	Weapon*		_weapon_dup;
	std::string _name;
};

#endif