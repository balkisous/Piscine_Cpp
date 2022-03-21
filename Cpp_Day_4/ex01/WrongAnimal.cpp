/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:30:27 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/21 14:47:30 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

			///////////////////////////////////
			///			Canonical			///
			///////////////////////////////////
WrongAnimal::WrongAnimal(void)
{
	std::cout << "Hello, i am WrongAnimal Constructor" << std::endl;
	this->type = "Unknow sound from this animal...";
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
	this->type = rhs.type;
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
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "This animal's sound is " << this->type << std::endl;
	return ;
}
