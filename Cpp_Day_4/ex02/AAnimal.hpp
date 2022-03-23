/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balkis <balkis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:30:25 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/23 11:38:22 by balkis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AAnimal
{
	public:
		//Constructor
		AAnimal(void);									//canonical constructeur par defaut
		AAnimal(std::string type);
		AAnimal(AAnimal const & rhs);						//canonical constructeur de recopie
		
		//Function
		AAnimal			&operator= ( const AAnimal & rhs);	//canonical surcharge de l'operation d'affectation
		std::string		getType(void)const;
		void			setType(std::string type);
		virtual void	makeSound(void)const = 0;
		
		//Destructor
		virtual ~AAnimal(void);							//canonical destructeur
	
	protected:
	
		std::string	_type;
	
	private:
};