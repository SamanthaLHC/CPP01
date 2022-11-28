/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:26:25 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/28 11:19:54 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombies;
	zombies = zombieHorde(4, "42 student");
	for (int i = 0; i < 4; i++)
		zombies[i].announce();
	delete [] zombies;
}