/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:20:45 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/21 12:22:50 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Hello, i am Dog constructeur" <<std::endl;
	return ;
}

Dog::Dog(const Animal & rhs)
{
	std::cout << "Hello, i am Dog Copy Constructor" << std::endl;
	*this = rhs;
	return ;
}

Dog &Dog::operator=(const Dog &rhs)
{
	std::cout << "Hello, i am Dog operator assignment" << std::endl;
	// mettre les membres this egaux a rhs
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Hello, i am Dog Destructor" << std::endl;
	return ;
}
