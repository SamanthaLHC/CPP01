/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:33:28 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/21 14:14:20 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef WEAPON_H
#define WEAPON_H

class Weapon
{

public:

	Weapon(std::string weapon_description);
	~Weapon();

	std::string& getType(void) const;
	void setType(std::string other_weapon);
	
private:
	std::string& _type;

};

#endif