/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Classe.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balkis <balkis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:46:59 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/02/22 19:39:07 by balkis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.Classe.hpp"

Contact::Contact(void)
{
	this->_first_name = "";
	this->_last_name = "";
	this->_nickname = "";
	this->_phone_number = "";
	this->_darkest_secret = "";
	//std::cout << " Bonjour, Je suis le construteur Contact" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	//std::cout << "Au revoir, Je suis le destructeur Contact" << std::endl;
	return ;
}

void	Contact::add_contact(void)
{
	std::cout << "----You gonna add a new conctat----" << std::endl;

	//---------------------first name---------------------------
	std::cout << ">Enter the first name: ";
	std::getline(std::cin, this->_first_name);
	while (this->_first_name == "")
	{
		std::cout << "You don't enter the first name!" << std::endl;	
		std::cout << ">Enter the first name: ";
		std::getline(std::cin, this->_first_name);
	}


	//---------------------last name-------------------------------
	std::cout << ">Enter the last name: ";
	std::getline(std::cin, this->_last_name);
	while (this->_last_name == "")
	{
		std::cout << "You don't enter the last name!" << std::endl;	
		std::cout << ">Enter the last name: ";
		std::getline(std::cin, this->_last_name);
	}

	//--------------------nickname----------------------------------
	std::cout << ">Enter the nickname: ";
	std::getline(std::cin, this->_nickname);
	while (this->_nickname == "")
	{
		std::cout << "You don't enter the nickname!" << std::endl;	
		std::cout << ">Enter the nickname: ";
		std::getline(std::cin, this->_nickname);
	}
	
	//---------------------phone number------------------------------
	std::cout << ">Enter the phone number: ";
	std::getline(std::cin, this->_phone_number);
	while (this->_phone_number == "")
	{
		std::cout << "You don't enter the phone number!" << std::endl;	
		std::cout << ">Enter the phone number: ";
		std::getline(std::cin, this->_phone_number);
	}

	//---------------------darkest secret---------------------------
	std::cout << ">Enter the darkest secret: ";
	std::getline(std::cin, this->_darkest_secret);
	while (this->_darkest_secret == "")
	{
		std::cout << "You don't enter the darkest secret!" << std::endl;	
		std::cout << ">Enter the darkest secret: ";
		std::getline(std::cin, this->_darkest_secret);
	}
}

void	Contact::display_one(void)
{
	if (this->_first_name == "")
		return ;
	//---------------------first name--------------------------
	if (this->_first_name.length() == 10)
		std::cout << this->_first_name;
	else if (this->_first_name.length() > 10)
	{
		for (int i = 0; i < 9; ++i)
    		std::cout << this->_first_name.at(i);
		std::cout << ".";
	}
	else if (this->_first_name.length() < 10)
	{
		for (size_t i = 0; i < 10 - _first_name.length(); i++)
			std::cout << " ";
		std::cout << this->_first_name;
	}
	std::cout << "|";

	//----------------------last name---------------------------
	if (this->_last_name.length() == 10)
		std::cout << this->_last_name;
	else if (this->_last_name.length() > 10)
	{
		for (int i = 0; i < 9; ++i)
    		std::cout << this->_last_name.at(i);
		std::cout << ".";
	}
	else if (this->_last_name.length() < 10)
	{
		for (size_t i = 0; i < 10 - _last_name.length(); i++)
			std::cout << " ";
		std::cout << this->_last_name;
	}
	std::cout << "|";

	//---------------------nick name---------------------------
		if (this->_nickname.length() == 10)
		std::cout << this->_nickname;
	else if (this->_nickname.length() > 10)
	{
		for (int i = 0; i < 9; ++i)
    		std::cout << this->_nickname.at(i);
		std::cout << ".";
	}
	else if (this->_nickname.length() < 10)
	{
		for (size_t i = 0; i < 10 - _nickname.length(); i++)
			std::cout << " ";
		std::cout << this->_nickname;
	}
}
void	Contact::display_all(void)
{
	std::cout << "fist name" << _first_name << std::endl;
	std::cout << "last name" << _last_name << std::endl;
	std::cout << "nickname" << _nickname << std::endl;
	std::cout << "phone number" << _phone_number << std::endl;
	std::cout << "darkest secret" << _darkest_secret << std::endl;
}
