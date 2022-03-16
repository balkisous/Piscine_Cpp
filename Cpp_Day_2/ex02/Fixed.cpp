/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:51:27 by balkis            #+#    #+#             */
/*   Updated: 2022/03/16 12:00:44 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _nb_fixed(0)	//constructor par default -> cannonical
{
//	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int n)
{
//	std::cout << "Int constructor called" << std::endl;	
	this->_nb_fixed = n << this->_nb_bit;
}

Fixed::Fixed(const float f)
{
//	std::cout << "Float constructor called" << std::endl;
	this->_nb_fixed = roundf( f * (1 << this->_nb_bit));
}


Fixed::~Fixed(void)		//destructor	-> cannonical
{
//	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & fx)	//copy constructor  -> cannonical
{
//	std::cout << "Copy constructor called" << std::endl;
	*this = fx;
	return ;
}

Fixed &	Fixed::operator=(const Fixed & fx)	//ft_operator assignation	-> cannonical
{
//	std::cout << "Copy assignment operator called" << std::endl;
	
	this->_nb_fixed = fx.getRawBits();
	return *this ;
}

//-------------------------------------------------------
//	6 opérateurs de comparaison

bool	Fixed::operator>( const Fixed & fx) const
{
	return (this->toFloat() > fx.toFloat());
}

bool	Fixed::operator<( const Fixed & fx) const
{
	return (this->toFloat() < fx.toFloat());
}

bool	Fixed::operator>=( const Fixed & fx) const
{
	return (this->toFloat() >= fx.toFloat());
}

bool	Fixed::operator<=( const Fixed & fx) const
{
	return (this->toFloat() <= fx.toFloat());
}

bool	Fixed::operator==( const Fixed & fx)
{
	return (this->toFloat() == fx.toFloat());
}

bool	Fixed::operator!=( const Fixed & fx)
{
	return (this->toFloat() != fx.toFloat());
}

//-------------------------------------------------------
//	4 opérateurs arithmétiques

Fixed	Fixed::operator+(const Fixed &b) const
{
	return (this->toFloat() + b.toFloat());
}

Fixed	Fixed::operator-(const Fixed &b) const
{
	return (this->toFloat() - b.toFloat());
}

Fixed	Fixed::operator*(const Fixed &b) const
{
	return (this->toFloat() * b.toFloat());
}

Fixed	Fixed::operator/(const Fixed &b) const
{
	return (this->toFloat() / b.toFloat());
}

//-------------------------------------------------------
//	4 opérateur (in/dé)crémentation
//
//	https://www.geeksforgeeks.org/increment-and-decrement-operator-overloading-in-c/?ref=rp
//		L-> explique comment faire

Fixed &		Fixed::operator++(void)		//pré -> ++a
{
	this->_nb_fixed++;
	return (*this);
}

Fixed		Fixed::operator++(int)	//post -> a++
{
	Fixed	tmp = *this;

	this->_nb_fixed++;
	return (tmp);
}

Fixed &		Fixed::operator--(void)		//pré -> --a
{
	this->_nb_fixed--;
	return (*this);
}

Fixed		Fixed::operator--(int)	//post -> a--
{
	Fixed	tmp = *this;

	this->_nb_fixed--;
	return (tmp);
}

Fixed	& Fixed::min(Fixed & fx1, Fixed & fx2)
{
	if (fx1 < fx2)
		return (fx1);
	else
		return (fx2);
}

Fixed	& Fixed::max(Fixed & fx1, Fixed & fx2)
{
	if (fx1 > fx2)
		return (fx1);
	else
		return (fx2);
}

Fixed const	& Fixed::min(Fixed const & fx1, Fixed const & fx2)
{
	if (fx1 < fx2)
		return (fx1);
	else
		return (fx2);
}

Fixed const	& Fixed::max(Fixed const & fx1, Fixed const & fx2)
{
	if (fx1 > fx2)
		return (fx1);
	else
		return (fx2);
}

//-------------------------------------------------------
// fonction get, set and ostream

int	Fixed::getRawBits(void) const
{
	return (this->_nb_fixed);
}

void	Fixed::setRawBits(int const raw)
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
	return (this->_nb_fixed >> _nb_bit);
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