/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balkis <balkis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:42:07 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/30 11:26:30 by balkis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdexcept>
#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class	RobotomyRequestForm;
class	SchruberryCreationForm;
class	PresidentialPardonForm;

class	Intern
{
	typedef void(Form::*ft_ptr)(void);	//definition d'un nouveau type de variable
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