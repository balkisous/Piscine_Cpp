/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balkis <balkis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:32:50 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/02/22 12:32:23 by balkis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "Contact.Classe.hpp"
#include "PhoneBook.Classe.hpp"
/*
void	add_contact(PhoneBook repo, char cmd[120])
{
	
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
*/

int	main(int argc, char **argv)
{
	PhoneBook	repo;

	(void)argv;
	if (argc == 1)
	{
		// c'est parti pour lancer le programme
		repo.start_phone();
		return (0);
	}
	std::cout << "Argument(s) are invalid" << std::endl;
	return (0);
}