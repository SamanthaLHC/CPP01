/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:33:20 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/18 18:03:48 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef HUMANA_H
#define HUMANA_H

class HumanA
{

public:

	HumanA(std::string chara_name, Weapon inst_weapon);
	~HumanA();

	void attack(void);

private:

};

#endif