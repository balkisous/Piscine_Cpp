/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 07:23:30 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/28 09:40:50 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
			//Constructor
			Form(void);							//canonical constructeur par defaut
			Form(std::string name, bool sign, int sgrade, int egrade);
			Form(Form const & rhs);				//canonical constructeur de recopie
			
			//Fomction
			Form &operator=(const Form & rhs);	//canonical surcharge de l'operation d'affectation
			void	beSigned(Bureaucrat bur);
				//ft_get
			std::string	getnameform(void)const;
			bool		getSign(void)const;
			int			getSgrade(void)const;
			int			getEgrade(void)const;
				//ft_set
			void		setName(std::string const name);
			void		setSign(bool sign);


				//execption
	class GradeTooHighException: public std::exception
	{
		virtual const char * what() const throw()
		{
			return ("Invalid!, You're Grade it's too high to be affect");
		}
	};
	class GradeTooLowException: public std::exception
	{
		virtual const char * what() const throw()
		{
			return ("Invalid!, You're Grade it's too low to be affect");
		}
	};

	class FormNotSignedException: public std::exception
	{
		virtual const char * what() const throw()
		{
			return ("This form is not signed yet");
		}
	};
	class FormAlreadySignedException: public std::exception
	{
		virtual const char * what() const throw()
		{
			return ("This form is already signed");
		}
	};



			//Destructeur
			~Form(void);						//canonical destructeur
	
	private:
	
		//Variable
		std::string			_Name;
		bool				_Sign;
		const int			_Sgrade;
		const int			_Egrade;
};

	std::ostream & operator << (std::ostream & sortie, const Form & rhs);