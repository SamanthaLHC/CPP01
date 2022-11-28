/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:01:07 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/28 11:12:53 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main()
{
	Zombie barnabe;
	Zombie* micheline;

	barnabe.set_name("BARANABE LE BG");
	barnabe.announce();
	micheline = newZombie("MICHELINE");
	randomChump("BRAD_PITT");
	micheline->announce();
	delete micheline;
}