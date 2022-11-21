/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:33:20 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/21 13:52:43 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Weapon.hpp>

#ifndef HUMANA_H
#define HUMANA_H

//here  implem a ref to a weap
class HumanA
{

public:

	HumanA(std::string chara_name, Weapon& inst_weapon);
	~HumanA();

	void attack(void);

private:
	std::string _name;
	Weapon& _weapon;
};

#endif