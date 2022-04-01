/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:42:07 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/04/01 10:06:33 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdexcept>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>

class	Convert
{
	public:
			//Constructor
			Convert(void);							//canonical constructeur par defaut
			Convert(char *arg);
			Convert(Convert const & rhs);			//canonical constructeur de recopie
	
			//Fonction
			Convert		&operator= ( const Convert & rhs);	//canonical surcharge de l'operation d'affectation
				/*........get........*/
			char		*getArg(void) const;
			char		getChar(void) const;
			int			getInt(void) const;
			float		getFloat(void) const;
			double		getDouble(void) const;
			
			char		toChar(void);
			int			toInt(void);
			float		toFloat(void);
			double		toDouble(void);
			
			//execption
	class Impossible: public std::exception
	{
		virtual const char * what() const throw()
		{
			return ("Impossible!");
		}
	};
	class Nondisplayable: public std::exception
	{
		virtual const char * what() const throw()
		{
			return ("Non displayable");
		}
	};
			//Destructeur
			~Convert(void);							//canonical destructeur

	protected:

	private:
		char		*arg;
		char		c;
		int			i;
		float		f;
		double		d;
};

	std::ostream & operator << (std::ostream & sortie, Convert & rhs);