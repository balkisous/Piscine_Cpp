/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balkis <balkis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:20:45 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/23 11:40:55 by balkis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

			///////////////////////////////////
			///			Canonical			///
			///////////////////////////////////
Dog::Dog(void) : AAnimal("Dog")
{
	std::cout << "Hello, i am Dog constructeur" <<std::endl;
	this->id = new Brain();
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
	delete this->id;
	this->id = new Brain(*rhs.id);
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Hello, i am Dog Destructor" << std::endl;
	delete this->id;
	return ;
}

void	Dog::makeSound(void) const
{
	std::cout << this->getType() << "'s sound is Wouaf! Wouaf!" << std::endl;
}

Brain	*Dog::getBrain(void)const
{
	return (this->id);
}