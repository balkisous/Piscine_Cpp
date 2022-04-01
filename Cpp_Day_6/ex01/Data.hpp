/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:42:07 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/04/01 11:35:09 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdexcept>
#include <iostream>

class	Data
{
	public:
			//Constructor
			Data(void);							//canonical constructeur par defaut
			Data(int n);
			Data(Data const & rhs);			//canonical constructeur de recopie
			
			//Fonction
			Data		&operator= ( const Data & rhs);	//canonical surcharge de l'operation d'affectation

			
			//Destructeur
			~Data(void);							//canonical destructeur

			//Variable
			int		data;

	protected:

	private:
};

	std::ostream & operator << (std::ostream & sortie, const Data & rhs);