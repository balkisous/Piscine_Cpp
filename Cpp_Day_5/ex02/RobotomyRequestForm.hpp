/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 07:38:40 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/28 17:53:39 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdexcept>
#include <iostream>
#include <stdlib.h>
#include "Form.hpp"

class Form;

class	RobotomyRequestForm : public Form
{
	public:
			//Constructor
			RobotomyRequestForm(void);							//canonical constructeur par defaut
			RobotomyRequestForm(std::string target);
			RobotomyRequestForm(std::string name, unsigned int grade);
			RobotomyRequestForm(RobotomyRequestForm const & rhs);			//canonical constructeur de recopie
	
			//Fonction
			RobotomyRequestForm		&operator= ( const RobotomyRequestForm & rhs);	//canonical surcharge de l'operation d'affectation
			void						execute(Bureaucrat const & executor) const;
			
					//ft_get
			std::string		getTarget(void)const;

			
			//Destructeur
			~RobotomyRequestForm(void);							//canonical destructeur

	protected:

	private:
		std::string		_Target;
};
