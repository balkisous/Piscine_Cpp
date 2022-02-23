/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 11:58:15 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/02/23 15:20:54 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.Class.hpp"
#include <cstring>
#include <sstream>

PhoneBook::PhoneBook(void)
{
//	std::cout << "Bonjour, Je suis le construteur PhoneBook" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
//	std::cout << "Au revoir, Je suis le destructeur PhoneBook" << std::endl;
	return ;
}

void	PhoneBook::search(int num_contact, int done)
{
	int			num_c;
	std::string	cmd;
	std::stringstream ss;

	num_c = 0;
	std::cout << "    index |first name| last name|  nickname" << std::endl;
	while (num_c < 8)
	{
		std::cout << "         " << num_c + 1 << "|";
		this->contact[num_c].display_one();
		std::cout << std::endl;
		num_c++;
	}
	std::cout << "What contact you search?" << std::endl;
	std::getline(std::cin, cmd);
	while (cmd.length() == 0)
	{
		std::cout << "Type a number!" << std::endl;
		std::cout << "What contact you search?" << std::endl;
		std::getline(std::cin, cmd);
	}
	ss << cmd;
	ss >> num_c;
	//num_c = std::stoi(cmd); -> sur mac
	if ((num_c > 0 && num_c <= num_contact) || done == 1)
		this->contact[num_c - 1].display_all();
	else
		std::cout << "Wrong number!" << std::endl;
}

void	PhoneBook::start_phone(void)
{
	int				num_conct;
	int				done;
	std::string		cmd;
	
	num_conct = 0;
	done = 0;
	std::cout << "Welcome to the cpp PhoneBook!!" << std::endl;
	while (42)
	{
		std::cout << "Enter a command (ADD, SEARCH or EXIT): ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD" || cmd == "add")
		{
			if (num_conct == 8)
			{
				std::cout << "You're already fill all the contact" << std::endl;
				std::cout << "The oldest contact replace by the new one" << std::endl;
				num_conct = 0;
				done = 1;
			}
			this->contact[num_conct].add_contact();
			std::cout << "Sucess, You add the contact number " << num_conct + 1 << "!!" << std::endl << std::endl;
			num_conct++;
		}	
		else if (cmd == "SEARCH" || cmd == "search")
		{
			std::cout << "What is the name contact you search ?" << std::endl;
			this->search(num_conct, done);
		}
		else if (cmd == "EXIT" || cmd == "exit" || std::cin.eof())
		{
			std::cout << "Bye! See you next time :)!" << std::endl;
			break;
		}
		else
			std::cout << "!!!!!!You type a wrong command!!!!!!" << std::endl << std::endl;
	}
}
