/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:42:07 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/29 16:03:06 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdexcept>
#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


class	Intern
{
	typedef void(Form::*ft_ptr)(void) const;	//definition d'un nouveau type de variable
	public:
			//Constructor
			Intern(void);							//canonical constructeur par defaut
			Intern(Intern const & rhs);			//canonical constructeur de recopie
	
			//Fonction
			Intern		& operator= ( const Intern & rhs);	//canonical surcharge de l'operation d'affectation
			Form		* makeForm(std::string nameform, std::string targetform);
			
			//Destructeur
			~Intern(void);							//canonical destructeur

	protected:

	private:
};

	std::ostream & operator << (std::ostream & sortie, const Intern & rhs);