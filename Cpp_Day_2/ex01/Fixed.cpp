/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balkis <balkis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:51:27 by balkis            #+#    #+#             */
/*   Updated: 2022/03/10 14:36:35 by balkis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _nb_fixed(0)	//constructor par default -> cannonical
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;	
	this->_nb_fixed = n << this->_nb_bit;		// convert int to float
}

//https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/
//	L-> site qui explique les formules à utiliser pour convertir double en float

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_nb_fixed = roundf( f * (1 << this->_nb_bit));
					// L-> roundf return the integral value nearest to (f * (1 << _nb_bit))
}


Fixed::~Fixed(void)		//destructor	-> cannonical
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & fx)	//copy constructor  -> cannonical
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fx;
	return ;
}

Fixed &	Fixed::operator=(const Fixed & fx)	//ft_operator assignation	-> cannonical
{
	std::cout << "Copy assignment operator called" << std::endl;
	
	this->_nb_fixed = fx.getRawBits();
	return *this ;
}

int	Fixed::getRawBits(void) const		//ft_get
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_nb_fixed);
}

void	Fixed::setRawBits(int const raw)	//ft_set
{
	this->_nb_fixed = raw;
	return ;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_nb_fixed / (float)(1 << this->_nb_bit));
}

int	Fixed::toInt(void) const
{
	return (this->_nb_fixed >> _nb_bit);	//convert float ot int
}

std::ostream & operator << (std::ostream & cout, const Fixed & fx)
{
	// Envoi sur le flot sortie des membres de objet en utilisant
	// les possibilités classiques de << pour les types de base
	// c’est-à-dire des instructions de la forme :
	// sortie << ..... ;
	cout << fx.toFloat();
	return (cout);
}