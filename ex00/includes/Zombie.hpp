/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:02:18 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/17 10:53:10 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ZOMBIE_H
# define ZOMBIE_H

class Zombie{

public:
	Zombie(void);
	~Zombie();


private:
	std::string _name;
	
	void announce(void);
	// lui donne un nom et le retourne pour qu'il puisse être utilisé en dehors de la portée de la fonction
	Zombie* newZombie(std::string name);
	void randomChump(std::string name);
};


#endif
