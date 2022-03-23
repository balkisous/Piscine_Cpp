/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balkis <balkis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:30:27 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/23 11:39:12 by balkis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

			///////////////////////////////////
			///			Canonical			///
			///////////////////////////////////
AAnimal::AAnimal(void)
{
	std::cout << "Hello, i am AAnimal Constructor" << std::endl;
	//this->_type = "Unknow sound from this AAAnimal...";
	this->_type = "AAnimal";
	return ;
}

AAnimal::AAnimal(std::string type)
{
	std::cout << "Hello, i am AAnimal String Constructor" << std::endl;
	this->_type = type;
	return ;
}

AAnimal::AAnimal(const AAnimal & rhs)
{
	std::cout << "Hello, i am AAnimal Copy Constructor" << std::endl;
	*this = rhs;
	return ;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs)
{
	std::cout << "Hello, i am AAnimal operator assignment" << std::endl;
	this->_type = rhs.getType();
	return (*this);
}

AAnimal::~AAnimal(void)
{
	std::cout << "Hello, i am AAnimal Destructor" << std::endl;
	return ;
}

			///////////////////////////////////
			///			Function			///
			///////////////////////////////////
std::string AAnimal::getType(void)const
{
	return (this->_type);
}

void	AAnimal::setType(std::string type)
{
	this->_type = type;
	return ;
}

void	AAnimal::makeSound(void) const
{
	std::cout << "This " << this->_type << "'s sound is unknow..."<< std::endl;
	return ;
}
