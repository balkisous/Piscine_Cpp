/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balkis <balkis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:20:42 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/23 11:41:04 by balkis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
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