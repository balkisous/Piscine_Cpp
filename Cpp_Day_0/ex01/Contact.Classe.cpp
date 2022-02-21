/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Classe.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:46:59 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/02/21 12:43:35 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.Classe.hpp"

Contact::Contact(void)
{
	this->first_name = "NULL";
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