/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:26:32 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/21 17:03:00 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

//Regular bold text
#define BBLK "\e[1;30m"
#define BRED "\e[1;31m"
#define BGRN "\e[1;32m"
#define BYEL "\e[1;33m"
#define BBLU "\e[1;34m"
#define BMAG "\e[1;35m"
#define BCYN "\e[1;36m"
#define BWHT "\e[1;37m"
#define RES "\e[0m"

class Zombie{

public:

	Zombie(void);
	~Zombie();

	std::string get_name(void)const;
	void set_name(std::string zombie_name);
	void announce(void);

private:

	std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif
