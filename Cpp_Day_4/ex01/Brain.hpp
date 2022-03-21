/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:02:41 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/21 15:09:50 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Brain
{

	public:
		//Constructor
		Brain(void);				//canonical constructeur par defaut
		Brain(Brain const & rhs);	//canonical constructeur de recopie

		//Function
		Brain &operator= ( const Brain & rhs);	//canonical surcharge de l'operation d'affectation

		//Variable
		std::string	ideas[99]; //99 + 0 = 100
	
		//Destructor
		virtual Brain(void);			//canonical destructeur

	protected:

	private:

}