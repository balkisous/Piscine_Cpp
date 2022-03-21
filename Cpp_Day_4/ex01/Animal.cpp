/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:30:27 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/21 14:33:33 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

			///////////////////////////////////
			///			Canonical			///
			///////////////////////////////////
Animal::Animal(void)
{
	std::cout << "Hello, i am Animal Constructor" << std::endl;
	this->type = "Unknow sound from this animal...";
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
	this->type = rhs.type;
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
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "This animal's sound is " << this->type << std::endl;
	return ;
}
