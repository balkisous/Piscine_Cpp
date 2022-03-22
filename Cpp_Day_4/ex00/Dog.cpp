/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:20:45 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/22 09:43:21 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

			///////////////////////////////////
			///			Canonical			///
			///////////////////////////////////
Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Hello, i am Dog constructeur" <<std::endl;
	return ;
}

Dog::Dog(const Dog & rhs)
{
	std::cout << "Hello, i am Dog Copy Constructor" << std::endl;
	*this = rhs;
	return ;
}

Dog &Dog::operator=(const Dog &rhs)
{
	std::cout << "Hello, i am Dog operator assignment" << std::endl;
	this->setType(rhs.getType());
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Hello, i am Dog Destructor" << std::endl;
	return ;
}

void	Dog::makeSound(void) const
{
	std::cout << this->getType() << "'s sound is Wouaf! Wouaf!" << std::endl;
}
