/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:30:27 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/22 09:45:08 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

			///////////////////////////////////
			///			Canonical			///
			///////////////////////////////////
Animal::Animal(void)
{
	std::cout << "Hello, i am Animal Constructor" << std::endl;
	//this->_type = "Unknow sound from this animal...";
	this->_type = "Animal";
	return ;
}

Animal::Animal(std::string type)
{
	std::cout << "Hello, i am Animal String Constructor" << std::endl;
	this->_type = type;
	return ;
}

Animal::Animal(const Animal & rhs)
{
	std::cout << "Hello, i am Animal Copy Constructor" << std::endl;
	*this = rhs;
	return ;
}

Animal &Animal::operator=(const Animal &rhs)
{
	std::cout << "Hello, i am Animal operator assignment" << std::endl;
	this->_type = rhs.getType();
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Hello, i am Animal Destructor" << std::endl;
	return ;
}

			///////////////////////////////////
			///			Function			///
			///////////////////////////////////
std::string Animal::getType(void)const
{
	return (this->_type);
}

void	Animal::setType(std::string type)
{
	this->_type = type;
	return ;
}

void	Animal::makeSound(void) const
{
	std::cout << "This " << this->_type << "'s sound is unknow..."<< std::endl;
	return ;
}
