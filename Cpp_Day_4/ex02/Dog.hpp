/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:20:42 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/22 15:02:14 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		//Constructor
		Dog(void);							//canonical constructeur par defaut
		Dog(Dog const & rhs);				//canonical constructeur de recopie

		//Function
		Dog &operator= ( const Dog & rhs);	//canonical surcharge de l'operation d'affectation
		void		makeSound(void)const;
		Brain *getBrain(void)const;
		//Destructor
		virtual ~Dog(void);					//canonical destructeur

	protected:

	private:

	Brain *id;
};