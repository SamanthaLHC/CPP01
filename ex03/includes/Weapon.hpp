/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sam <sam@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:33:28 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/23 16:45:56 by sam              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>


class Weapon
{

public:

	Weapon(std::string weapon_description);
	~Weapon(void);

	const std::string& getType(void) const;
	void setType(std::string other_weapon);
	
private:
	std::string _type;

};

#endif