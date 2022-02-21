/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:32:50 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/02/21 11:10:28 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "Contact.Classe.hpp"
#include "PhoneBook.Classe.hpp"

void	add_contact(PhoneBook repo, char cmd[120])
{
	std::cout << "You gonna add a new conctat ->";
	std::cout << " Enter the first name: ";
	std::cin >> cmd;
	if (strcmp(cmd, "\n") == 0)
	{
		std::cout << "The fields of a saved contact do not can be empty." << std::endl;
		return ;
	}
	repo.contact[0].name = cmd;
	std::cout << "the name of the first contact is " << repo.contact[0].name << std::endl;
}

int	main(int argc, char **argv)
{
	PhoneBook	repo;
	char		cmd[120];

	(void)argv;
	if (argc == 1)
	{
		// c'est parti pour lancer le programme
		while (42)
		{
			std::cout << "Enter a command(ADD, SEARCH or EXIT): ";
			std::cin >> cmd;
			std::cout << "You type the command " << cmd << std::endl;
			if (strcmp(cmd, "ADD") == 0)
				repo.add_contact(cmd);
			if (strcmp(cmd, "SEARCH") == 0)
			{
				std::cout << "What is the name contact you search" << std::endl;
			}
			if (strcmp(cmd, "EXIT") == 0)
			{
				std::cout << "Bye! See you next time :)!" << std::endl;
				break;
			}
		}
		return (0);
	}
	std::cout << "Argument(s) are invalid" << std::endl;
	return (0);
}