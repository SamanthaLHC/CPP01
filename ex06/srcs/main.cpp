/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sam <sam@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:43:14 by sam               #+#    #+#             */
/*   Updated: 2022/11/23 15:14:55 by sam              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include "colors.h"

#include <string>
#include <iostream>

int main(int ac, char **av)
{
	if (ac != 2)
		std::cout << BYEL << "You have to pass a param among : DEBUG / INFO / WARNING / ERROR."
		<< RES << std::endl;
	else
	{
		Harl inst;
		inst.complain(std::string(av[1]));
	}
	return 0;
}