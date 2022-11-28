/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:26:25 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/28 11:25:24 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int n = 4;
	Zombie *zombies;
	zombies = zombieHorde(n, "42 student");
	for (int i = 0; i < n; i++)
		zombies[i].announce();
	delete [] zombies;
}