/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 07:38:40 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/28 08:57:04 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdexcept>
#include <iostream>
#include "Form.hpp"

class Form;

class	Bureaucrat
{
	public:
			//Constructor
			Bureaucrat(void);							//canonical constructeur par defaut
			Bureaucrat(std::string name, unsigned int grade);
			Bureaucrat(Bureaucrat const & rhs);			//canonical constructeur de recopie
	
			//Fonction
			Bureaucrat		&operator= ( const Bureaucrat & rhs);	//canonical surcharge de l'operation d'affectation
					//ft_get
			std::string		getName(void)const;
			unsigned int	getGrade(void)const;
					//ft_set
			void			setName(std::string name);
			void			setGrade(unsigned int grade);

					//ft_base
			void	increment(void);
			void	decrement(void);
			void	GradeTooHighException(void);
			void	GradeTooLowException(void);
			void	signForm(Form & fr);

			
			//Destructeur
			~Bureaucrat(void);							//canonical destructeur

	protected:

	private:
		std::string		_Name;
		int				_Grade;
};

	std::ostream & operator << (std::ostream & sortie, const Bureaucrat & rhs);