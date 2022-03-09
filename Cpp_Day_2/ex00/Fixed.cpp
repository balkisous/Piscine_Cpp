/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:51:27 by balkis            #+#    #+#             */
/*   Updated: 2022/03/09 17:19:52 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int n)		//constructor  
{
	_nb_fixed = n;
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void)		//destructor
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & fx)
{
	std::cout << "Copy constructor called" << std::endl;

	*this = fx;
	return ;
}

Fixed &	Fixed::operateur(Fixed const & fx)	//ft_operator assignation
{
	std::cout << "Copy assignation called" << std::endl;
	
	this->_nb_fixed = fx.getRawBits();
	return *this ;
}

int	Fixed::getRawBits(void) const		//ft_get
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_nb_fixed);
}

void	Fixed::setRawBits(int const raw)	//ft_set
{
	this->_nb_fixed = raw;
	return ;
}