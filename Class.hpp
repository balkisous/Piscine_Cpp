/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:42:07 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/28 13:43:30 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdexcept>
#include <iostream>

class	Base
{
	public:
			//Constructor
			Base(void);							//canonical constructeur par defaut
			Base(Base const & rhs);			//canonical constructeur de recopie
	
			//Fonction
			Base		&operator= ( const Base & rhs);	//canonical surcharge de l'operation d'affectation

			
			//Destructeur
			~Base(void);							//canonical destructeur

	protected:

	private:
};

	std::ostream & operator << (std::ostream & sortie, const Base & rhs);