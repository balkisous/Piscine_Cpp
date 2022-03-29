/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 07:38:40 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/28 17:30:19 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdexcept>
#include <iostream>
#include <fstream>
#include <cstring>
#include "Form.hpp"

class Form;

class	ShrubberyCreationForm : public Form
{
	public:
			//Constructor
			ShrubberyCreationForm(void);							//canonical constructeur par defaut
			ShrubberyCreationForm(std::string target);
			ShrubberyCreationForm(std::string name, unsigned int grade);
			ShrubberyCreationForm(ShrubberyCreationForm const & rhs);			//canonical constructeur de recopie
	
			//Fonction
			ShrubberyCreationForm		&operator= ( const ShrubberyCreationForm & rhs);	//canonical surcharge de l'operation d'affectation
			void						execute(Bureaucrat const & executor) const;
			
					//ft_get
			std::string		getTarget(void)const;
			
			//Destructeur
			~ShrubberyCreationForm(void);							//canonical destructeur

	protected:

	private:
		std::string		_Target;
};
