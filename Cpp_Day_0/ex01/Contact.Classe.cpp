/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Classe.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balkis <balkis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:46:59 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/02/21 19:38:35 by balkis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.Classe.hpp"

Contact::Contact(void)
{
	this->_first_name = "NULL";
	this->name = "NULL";
	this->last_name = "NULL";
	this->phone_number = "NULL";
	this->darkest_secret = "NULL";
	//std::cout << "Je suis le construteur Contact" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	//std::cout << "Je suis le destructeur Contact" << std::endl;
	return ;
}

std::string	Contact::get_first_name(void) const
{
	return (this->_first_name);
}

int Contact::set_first_name(std::string first_name)
{
	if (first_name.length() > 0)
	{
		this->_first_name = first_name;
		return (1);
	}
	else
		return (0);
}
