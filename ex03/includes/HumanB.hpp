/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:33:25 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/18 18:06:10 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef HUMANB_H
#define HUMANB_H

class HumanB
{

public:

	HumanB(std::string chara_name);
	~HumanB();

	void setWeapon(Weapon inst_weapon);
	void attack(void);

private:

};

#endif