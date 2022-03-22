/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:30:25 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/22 14:42:11 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
	public:
		//Constructor
		Brain(void);									//canonical constructeur par defaut
		Brain(Brain const & rhs);						//canonical constructeur de recopie
		
		//Function
		Brain			&operator= ( const Brain & rhs);	//canonical surcharge de l'operation d'affectation

		//Destructor
		virtual ~Brain(void);							//canonical destructeur
	
	protected:
	
		std::string ideas[100];
	
	private:
};