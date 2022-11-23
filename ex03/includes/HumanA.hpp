/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sam <sam@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:33:20 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/23 16:46:07 by sam              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <Weapon.hpp>

class HumanA
{

public:

	HumanA(std::string chara_name, Weapon& inst_weapon);
	~HumanA(void);

	void attack(void);

private:
	std::string _name;
	Weapon& _weapon;
};

#endif