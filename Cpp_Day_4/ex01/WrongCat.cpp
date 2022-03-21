/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:05:55 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/21 14:54:51 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

			///////////////////////////////////
			///			Canonical			///
			///////////////////////////////////
WrongCat::WrongCat(void)
{
	std::cout << "Hello, i am WrongCat constructeur" <<std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat & rhs)
{
	std::cout << "Hello, i am WrongCat Copy Constructor" << std::endl;
	*this = rhs;
	return ;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	std::cout << "Hello, i am WrongCat operator assignment" << std::endl;
	this->type = rhs.getType();
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "Hello, i am WrongCat Destructor" << std::endl;
	return ;
}
