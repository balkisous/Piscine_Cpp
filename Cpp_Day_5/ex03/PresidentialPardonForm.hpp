/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 07:38:40 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/28 15:51:58 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdexcept>
#include <iostream>
#include "Form.hpp"

class Form;

class	PresidentialPardonForm : public Form
{
	public:
			//Constructor
			PresidentialPardonForm(void);							//canonical constructeur par defaut
			PresidentialPardonForm(std::string target);
			PresidentialPardonForm(std::string name, unsigned int grade);
			PresidentialPardonForm(PresidentialPardonForm const & rhs);			//canonical constructeur de recopie
	
			//Fonction
			PresidentialPardonForm		&operator= ( const PresidentialPardonForm & rhs);	//canonical surcharge de l'operation d'affectation
			void						execute(Bureaucrat const & executor) const;
			
					//ft_get
			std::string		getTarget(void)const;

			
			//Destructeur
			~PresidentialPardonForm(void);							//canonical destructeur

	protected:

	private:
		std::string		_Target;
};
