/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balkis <balkis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:05:55 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/23 11:40:19 by balkis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

			///////////////////////////////////
			///			Canonical			///
			///////////////////////////////////
Cat::Cat(void) : AAnimal("Cat")
{
	std::cout << "Hello, i am Cat constructeur" <<std::endl;
	this->id = new Brain();
	return ;
}

Cat::Cat(const Cat & rhs)
{
	std::cout << "Hello, i am Cat Copy Constructor" << std::endl;
	*this = rhs;
	return ;
}

Cat &Cat::operator=(const Cat &rhs)
{
	std::cout << "Hello, i am Cat operator assignment" << std::endl;
	this->setType(rhs.getType());
	delete this->id;
	this->id = new Brain(*rhs.id);
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Hello, i am Cat Destructor" << std::endl;
	delete this->id;
	return ;
}

void	Cat::makeSound(void)const
{
	std::cout << this->getType() << "'s sound is Miaouuuw~" << std::endl;
}
