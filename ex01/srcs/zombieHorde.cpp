/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:26:18 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/28 11:24:40 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
	{
		std::cerr << BRED << "wrong numbers of zombies." << RES << std::endl;
		return NULL;
	}
	Zombie * zombies_horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombies_horde[i].set_name(name);
	}
	return zombies_horde;
}
