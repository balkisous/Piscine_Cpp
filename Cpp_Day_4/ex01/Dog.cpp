/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:20:45 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/21 14:25:11 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

			///////////////////////////////////
			///			Canonical			///
			///////////////////////////////////
Dog::Dog(void)
{
	std::cout << "Hello, i am Dog constructeur" <<std::endl;
	this->type = "Wouaf!!Wouaf!";
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
	this->type = rhs.getType();
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Hello, i am Dog Destructor" << std::endl;
	return ;
}

