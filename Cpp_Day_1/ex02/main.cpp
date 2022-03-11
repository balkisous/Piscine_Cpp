/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 23:15:27 by balkis            #+#    #+#             */
/*   Updated: 2022/03/11 08:04:47 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	s_begin = "HI THIS IS BRAIN";
	std::string	*stringPTR = &s_begin;
	std::string &stringREF = s_begin;

	std::cout << "L'adresse de la string en mémoire est	" << s_begin << std::endl;
	std::cout << "L'adresse stockée dans la string est	" << stringPTR << std::endl;
	std::cout << "L’adresse stockée dans stringREF est	" << stringREF << std::endl << std::endl;


	std::cout << "La valeur de la string est		" << s_begin << std::endl;
	std::cout << "La valeur pointée par stringPTR est	" << *stringPTR << std::endl;
	std::cout << "La valeur pointée par stringREF est	" << stringREF << std::endl << std::endl;

		*stringPTR = "No more brain T-T by ptr";

	std::cout << "La valeur de la string est		" << s_begin << std::endl;
	std::cout << "La valeur pointée par stringPTR est	" << *stringPTR << std::endl;
	std::cout << "La valeur pointée par stringREF est	" << stringREF << std::endl << std::endl;


		stringREF = "No more brain T-T by ref";


	std::cout << "La valeur de la string est		" << s_begin << std::endl;
	std::cout << "La valeur pointée par stringPTR est	" << *stringPTR << std::endl;
	std::cout << "La valeur pointée par stringREF est	" << stringREF << std::endl << std::endl;

	//// Ce day a pour objectif de nous apprendre les references (une toute nouvelle notion) et qu'elle
	//// se comporte comme un pointeur toujours déréférencer et qui doit obligatoirement pointee 
	//// sur une chose des qu'on l'a declare, elle pointe TOUJOURS sur une valeur
	//// la valeur peut etre modifie comme le font les pointeurs

	return (0);

}
