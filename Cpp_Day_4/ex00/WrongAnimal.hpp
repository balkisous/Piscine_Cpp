/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:30:25 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/21 14:41:28 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
	public:
		//Constructor
		WrongAnimal(void);									//canonical constructeur par defaut
		WrongAnimal(WrongAnimal const & rhs);						//canonical constructeur de recopie
		
		//Function
		WrongAnimal			&operator= ( const WrongAnimal & rhs);	//canonical surcharge de l'operation d'affectation
		std::string		getType(void)const;
		void			makeSound(void)const;
		
		//Destructor
		virtual ~WrongAnimal(void);							//canonical destructeur
	
	protected:
	
		std::string	type;
	
	private:
};