/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:30:27 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/22 09:54:02 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

			///////////////////////////////////
			///			Canonical			///
			///////////////////////////////////
WrongAnimal::WrongAnimal(void)
{
	std::cout << "Hello, i am WrongAnimal Constructor" << std::endl;
	this->_type = "WrongAnimal";
	return ;
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "Hello, i am WrongAnimal String Constructor" << std::endl;
	this->_type = type;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal & rhs)
{
	std::cout << "Hello, i am WrongAnimal Copy Constructor" << std::endl;
	*this = rhs;
	return ;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	std::cout << "Hello, i am WrongAnimal operator assignment" << std::endl;
	this->_type = rhs.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Hello, i am WrongAnimal Destructor" << std::endl;
	return ;
}

			///////////////////////////////////
			///			Function			///
			///////////////////////////////////
std::string WrongAnimal::getType(void)const
{
	return (this->_type);
}

void	WrongAnimal::setType(std::string type)
{
	this->_type = type;
	return ;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "This " << this->_type << "'s sound is unknow..."<< std::endl;
	return ;
}
