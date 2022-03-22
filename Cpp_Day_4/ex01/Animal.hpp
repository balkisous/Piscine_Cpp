/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:30:25 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/22 09:46:03 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
	public:
		//Constructor
		Animal(void);									//canonical constructeur par defaut
		Animal(std::string type);
		Animal(Animal const & rhs);						//canonical constructeur de recopie
		
		//Function
		Animal			&operator= ( const Animal & rhs);	//canonical surcharge de l'operation d'affectation
		std::string		getType(void)const;
		void			setType(std::string type);
		virtual void	makeSound(void)const;
		
		//Destructor
		virtual ~Animal(void);							//canonical destructeur
	
	protected:
	
		std::string	_type;
	
	private:
};