/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:16:57 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/21 12:30:56 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		//Constructor
		Cat(void);							//canonical constructeur par defaut
		Cat(Cat const & rhs);				//canonical constructeur de recopie

		//Function
		Cat &operator= ( const Cat & rhs);	//canonical surcharge de l'operation d'affectation
	
		//Variable
	//	std::string	type;

		//Destructor
		virtual ~Cat(void);					//canonical destructeur

	protected:

	private:
}