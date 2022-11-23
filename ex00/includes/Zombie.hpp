/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sam <sam@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:02:18 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/23 16:45:04 by sam              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>



//Regular text
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

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
