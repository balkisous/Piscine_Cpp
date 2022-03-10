/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balkis <balkis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:51:31 by balkis            #+#    #+#             */
/*   Updated: 2022/03/10 18:26:42 by balkis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public :
		Fixed(void);							//canonical constructeur par defaut
		Fixed(const int n);
		Fixed(const float f);
		Fixed(Fixed const & fx);				//canonical consterur de recopie
		~Fixed(void);							//canonical destructeur par defaut

		Fixed & operator= ( const Fixed & fx);	//canonical surcharge de l'operation d'affectation

		//https://web.maths.unsw.edu.au/~lafaye/CCM/cpp/cppop.htm
		//	L-> "man" pour chaque operator		

		
		//6 operator de comparaison
		bool	operator>( const Fixed & fx);	//this > fx
		bool	operator<( const Fixed & fx);	//this < fx
		bool	operator>=( const Fixed & fx);	//this >= fx
		bool	operator<=( const Fixed & fx);	//this <= fx
		bool	operator==( const Fixed & fx);	//this == fx
		bool	operator!=( const Fixed & fx);	//this != fx
		

		//4 operator arithmétiques
		// https://en.cppreference.com/w/cpp/language/operator_arithmetic
		//	L-> man opérateur arithmétiques

		Fixed	operator+(const Fixed &b) const;	//a + b
		Fixed	operator-(const Fixed &b) const;	//a - b
		Fixed	operator*(const Fixed &b) const;	//a * b
		Fixed	operator/(const Fixed &b) const;	//a / b
		
		//4 operator (in/dé)crémentation
		// https://en.cppreference.com/w/cpp/language/operator_incdec
		//	L-> man opérateur (in/dé)crémentation

		Fixed	& operator++(void);				//++a
		Fixed	& operator--(void);				//--a
		Fixed	operator++(int);				//a++
		Fixed	operator--(int);				//a--
		
		
		static Fixed			& min(Fixed & fx1, Fixed & fx2);
		static Fixed			& max(Fixed & fx1, Fixed & fx2);
		static Fixed const		& min(Fixed const & fx1, Fixed const & fx2);
		static Fixed const		& max(Fixed const & fx1, Fixed const & fx2);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		

	private :

		int	_nb_fixed;
		static int const _nb_bit = 8;
};

std::ostream & operator << (std::ostream & sortie, const Fixed & fx);

# endif