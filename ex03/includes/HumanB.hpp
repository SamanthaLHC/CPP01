/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sam <sam@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:33:25 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/23 16:46:02 by sam              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{

public:

	HumanB(std::string chara_name);
	~HumanB(void);

	
	void setWeapon(Weapon& inst_weapon);
	
	void attack(void);

private:
	Weapon*		_weapon_dup;
	std::string _name;
};

#endif