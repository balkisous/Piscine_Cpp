/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:32:50 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/02/20 15:28:12 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "Contact.Classe.hpp"
#include "PhoneBook.Classe.hpp"

int	main(int argc, char **argv)
{
	PhoneBook	repo;
	char		cmd[10];

	(void)argv;
	if (argc == 1)
	{
		// c'est parti pour lancer le programme
		while (42)
		{
			std::cout << "Enter a  command: ";
			std::cin >> cmd;
			//std::cout << "You enter " << cmd << std::endl;
			if (strcmp(cmd, "ADD") == 0)
			{
				std::cout << "you gonna add a new conctat" << std::endl;
			}
			if (strcmp(cmd, "SEARCH") == 0)
			{
				std::cout << "what is the name contact" << std::endl;
			}
			if (strcmp(cmd, "EXIT") == 0)
			{
				std::cout << "Bye! See you a next time :)!" << std::endl;
				break;
			}
		}
		return (0);
	}
	std::cout << "Srry, don't enter an argument" << std::endl;
	return (0);
}