/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-huec <sle-huec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:22:42 by sle-huec          #+#    #+#             */
/*   Updated: 2022/11/18 17:27:15 by sle-huec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#define BWHT "\e[1;37m"
#define RES "\e[0m"

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	
	std::string* stringPTR = &brain;
	std::string& stringREF = brain;

	std::cout << BWHT << "str 's address:               " << &brain << RES << std::endl;
	std::cout << BWHT << "address stocked in stringPTR: " << stringPTR << RES << std::endl;
	std::cout << BWHT << "address stocked in stringREF: " << &stringREF << RES <<  std::endl;
	std::cout << BWHT << "str's value:                  " << brain << RES << std::endl;
	std::cout << BWHT << "stringPTR's value:            " << *stringPTR << RES << std::endl;
	std::cout << BWHT << "stringREF's value:            " << stringREF << RES << std::endl;
}