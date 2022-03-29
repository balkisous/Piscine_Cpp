/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 07:31:11 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/28 19:21:03 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _Name("Unknow"), _Sign(false), _Sgrade(20), _Egrade(10)
{
	std::cout << "Hello i am Form Constructor" << std::endl;
}
Form::Form(std::string name, int sgrade, int egrade) : _Name(name), _Sign(false), _Sgrade(sgrade), _Egrade(egrade)
{
	std::cout << "Hello i am Form Params Constructor" << std::endl;
}

Form::Form(const Form & rhs) : _Sgrade(20), _Egrade(10)
{
	std::cout << "Hello i am Form Copy Constructor" << std::endl;
	*this = rhs;
}

Form &Form::operator=(const Form & rhs)
{
	std::cout << "Hello i am Form operator assignement" << std::endl;
	this->setSign(rhs.getSign());
	return (*this);
}

Form::~Form(void)
{
	std::cout << "Hello i am Form Destructor" << std::endl << std::endl;
}
			///////////////////////////////////
			///			Fonction			///
			///////////////////////////////////

			//.............set................//

void	Form::setSign(bool sign)
{
	this->_Sign = sign;
}

			//.............get................//
std::string	Form::getnameform(void) const
{
	return (this->_Name);
}

bool	Form::getSign(void) const
{
	return (this->_Sign);
}

int		Form::getSgrade(void) const
{
	return (this->_Sgrade);
}

int		Form::getEgrade(void) const
{
	return (this->_Egrade);
}

void	Form::beSigned(Bureaucrat bur)
{
	std::cout << "Form function beSigned called" << std::endl;
	if (bur.getGrade() > (unsigned int)this->_Sgrade)
		throw Form::GradeTooLowException();
	else if (this->_Sign == true)
		throw Form::FormAlreadySignedException();
	else
		this->_Sign = true;
	std::cout << "This Form is signed successfuly" << std::endl;
}

void	Form::checker_exec(Bureaucrat const & bur) const
{
	if (this->getSign() == false)
		throw Form::FormNotSignedException();
	else if (this->getEgrade() < (int)bur.getGrade())
		throw Form::GradeTooLowException();
	return ;	
}

std::ostream & operator << (std::ostream & cout, const Form & rhs)
{
	// Envoi sur le flot sortie des membres de objet en utilisant
	// les possibilités classiques de << pour les types de base
	// c’est-à-dire des instructions de la forme :
	// sortie << ..... ;
	cout << "Name is " << rhs.getnameform() << std::endl;
	if (rhs.getSign() == false)
		cout << "Sign is not signed..." << std::endl;
	else
		cout << "Sign is signed!!" << std::endl;
	cout << "The grade to have for sign is " << rhs.getSgrade() << std::endl;
	cout << "The grade to have for execute is " << rhs.getEgrade() << std::endl;	
	return (cout);
}