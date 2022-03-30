/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:42:07 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/30 20:09:41 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdexcept>
#include <ctype.h>
#include <iostream>

class	Convert
{
	public:
			//Constructor
			Convert(void);							//canonical constructeur par defaut
			Convert(Convert const & rhs);			//canonical constructeur de recopie
	
			//Fonction
			Convert		&operator= ( const Convert & rhs);	//canonical surcharge de l'operation d'affectation
			char		getChar(void) const;
			int			getInt(void) const;
			float		getFloat(void) const;
			double		getDouble(void) const;
			
			//Destructeur
			~Convert(void);							//canonical destructeur

	protected:

	private:
		
		char	c;
		int		i;
		float	f;
		double	d;

};

	std::ostream & operator << (std::ostream & sortie, const Convert & rhs);