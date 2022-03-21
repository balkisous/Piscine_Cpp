/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:05:55 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/21 14:36:06 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

			///////////////////////////////////
			///			Canonical			///
			///////////////////////////////////
Cat::Cat(void)
{
	std::cout << "Hello, i am Cat constructeur" <<std::endl;
	this->type = "Miaaaoouu~";
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
	this->type = rhs.getType();
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Hello, i am Cat Destructor" << std::endl;
	return ;
}
