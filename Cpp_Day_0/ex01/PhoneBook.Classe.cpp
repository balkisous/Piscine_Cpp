/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.Classe.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:47:46 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/02/21 12:56:50 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.Classe.hpp"
#include <cstring>
#include <string>

PhoneBook::PhoneBook(void) : num_conct(0)
{
	//std::cout << "Je suis le construteur PhoneBook" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	//std::cout << "Je suis le destructeur PhoneBook" << std::endl;
	return ;
}

void		PhoneBook::add_contact(char cmd[120])
{
	std::cout << "---Here in phonebook's function add contact--" << std::endl;
	std::cout << "-----You gonna add a new conctat-----" << std::endl;
	add_first_name(cmd);
	return ;
}

void	PhoneBook::add_first_name(char cmd[120])
{
	if (PhoneBook::num_conct >= 8)
	{
		std::cout << "You already fill all the repo, you gonna overwrite the oldest contact" << std::endl;
		PhoneBook::num_conct = 0;
	}
	std::cout << " Enter the first name: ";
	std::cin >> cmd;
	this->contact[PhoneBook::num_conct].first_name = cmd;
	if (this->contact[this->num_conct].first_name.length() == 0)
	{
		std::cout << "The fields of a saved contact do not can be empty." << std::endl;
		return ;
	}
	std::cout << "The first name of the contact is " << this->contact[PhoneBook::num_conct].first_name << std::endl;
	add_name(cmd);
	return ;
}

void	PhoneBook::add_name(char cmd[120])
{
	std::cout << " Enter the name: ";
	std::cin >> cmd;
	if (strcmp(cmd, "\n") == 0)
	{
		std::cout << "The fields of a saved contact do not can be empty." << std::endl;
		return ;
	}
	this->contact[PhoneBook::num_conct].name = cmd;
	std::cout << "The name of the contact is " << this->contact[PhoneBook::num_conct].name << std::endl;
	return ;
}