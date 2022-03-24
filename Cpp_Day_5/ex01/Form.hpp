/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 08:43:02 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/24 11:54:41 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class 	Bureaucrat;

class Form
{
	public:
	
		//Constructor
		Form(void);							//canonical constructeur par defaut
		Form(Form const & rhs);				//canonical constructeur de recopie

		//Function
		Form &operator= ( const Form & rhs);	//canonical surcharge de l'operation d'affectation
		
			//ft_get
		std::string	getName(void)const;
		bool		getSign(void)const;
		int			getSgrade(void)const;
		int			getEgrade(void)const;
		
			//ft_set
		void		setName(std::string name);
		void		setSgrade(unsigned int grade);
		void		setEgrade(unsigned int grade);
		
			//ft_function
		void	beSigned(Bureaucrat br);
		void	high(int i, int min, int grade);
		void	low(int i, int max, int grade);
		void	GradeTooHighException(void);
		void	GradeTooLowException(void);
		
		
		//Destructor
		virtual ~Form(void);
	
	protected:

	private:
	
		//Variable
		std::string const	_Name;
		bool				_Sign;
		int	const			_Sgrade;
		int	const			_Egrade;
};

	std::ostream & operator << (std::ostream & sortie, const Form & rhs);
