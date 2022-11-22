/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sam <sam@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:09:48 by sam               #+#    #+#             */
/*   Updated: 2022/11/22 16:00:00 by sam              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

#include "colors.h"


// Ouvrir un fichier en écriture (écire dedans)

// on déclare un flux exactement de la même manière qu'une variable, 
// une variable dont le type serait ofstream  , et dont la valeur serait 
// le chemin d'accès du fichier à lire.
 
// Si le fichier n'existait pas, le programme le créerait automatiquement ! 
// Par contre, il faut que le dossier existe. Dans l'exemple
// précédent, le dossier C:/Nanoc/C++/Fichiers doit exister. Si ce n'est pas le cas, rien ne sera écrit.


// Ouvrir un fichier en lecture


//Les fichiers ouverts sont automatiquement refermés lorsque l'on sort du bloc où le flux est déclaré.

int main(int ac, char **av)
{
	(void) av;
	
	if (ac != 4)
	{
		std::cout << BYEL << "You have to pass, one filename and two str as parameters." << RES << std::endl;
		return -1;
	}
	else
		std::cout << "pouet" << std::endl;
}
