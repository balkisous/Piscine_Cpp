/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balkis <balkis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:16:57 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/23 11:40:43 by balkis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		//Constructor
		Cat(void);							//canonical constructeur par defaut
		Cat(Cat const & rhs);				//canonical constructeur de recopie

		//Function
		Cat &operator= ( const Cat & rhs);	//canonical surcharge de l'operation d'affectation
		void	makeSound(void)const;
		//Variable

		//Destructor
		virtual ~Cat(void);					//canonical destructeur

	protected:

	private:

		Brain *id;
};