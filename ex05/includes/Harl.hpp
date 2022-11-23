/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sam <sam@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:15:21 by sam               #+#    #+#             */
/*   Updated: 2022/11/23 16:46:29 by sam              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{

public:

	Harl();
	~Harl(void);
	
	void complain(std::string level);

private:

	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif