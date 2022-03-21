/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:05:55 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/21 12:28:39 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Hello, i am Cat constructeur" <<std::endl;
	this->type = "Miaaaoouu~";
	return ;
}

Cat::Cat(const Animal & rhs)
{
	std::cout << "Hello, i am Cat Copy Constructor" << std::endl;
	*this = rhs;
	return ;
}

Cat &Cat::operator=(const Cat &rhs)
{
	std::cout << "Hello, i am Cat operator assignment" << std::endl;
	// mettre les membres this egaux a rhs
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Hello, i am Cat Destructor" << std::endl;
	return ;
}