/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:16:57 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/21 14:42:06 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		//Constructor
		WrongCat(void);							//canonical constructeur par defaut
		WrongCat(WrongCat const & rhs);				//canonical constructeur de recopie

		//Function
		WrongCat &operator= ( const WrongCat & rhs);	//canonical surcharge de l'operation d'affectation
		//Variable

		//Destructor
		virtual ~WrongCat(void);					//canonical destructeur

	protected:

	private:
};