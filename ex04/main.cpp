/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sam <sam@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:09:48 by sam               #+#    #+#             */
/*   Updated: 2022/11/22 16:59:03 by sam              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

#include "colors.h"



int main(int ac, char **av)
{
	(void) av;
	
	if (ac != 4)
	{
		std::cout << BYEL << "You have to pass, one filename and two str as parameters." << RES << std::endl;
		return -1;
	}
	else
	{
		
	}
}
