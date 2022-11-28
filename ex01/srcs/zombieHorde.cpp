/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:26:18 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/28 11:17:44 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie * zombies_horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombies_horde[i].set_name(name);
	}
	return zombies_horde;
}
