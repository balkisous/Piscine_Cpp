/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balkis <balkis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:51:31 by balkis            #+#    #+#             */
/*   Updated: 2022/03/10 10:16:40 by balkis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public :
		Fixed(void);							//canonical constructeur par defaut
		Fixed(int n);
		Fixed(Fixed const & fx);				//canonical consterur de recopie
		~Fixed(void);							//canonical destructeur par defaut

		Fixed & operator= ( const Fixed & fx);	//canonical surcharge de l'operation d'affectation
		int	getRawBits(void) const;
		void setRawBits(int const raw);

	private :

		int	_nb_fixed;
		static int const _nb_bit; 
};

# endif