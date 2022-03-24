/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 08:45:15 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/24 11:56:21 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

			////////////////////////////////
			///			Canonical		///
			///////////////////////////////

Form::Form(void) : _Name("Formulaire"), _Sgrade(50), _Egrade(25)
{
	std::cout << "Hello, i am Form Constructor" << std::endl;
	this->_Sign = false;
	return ;
}

Form::Form(const Form & rhs) : _Name("Formulaire"), _Sgrade(50), _Egrade(25)
{
	std::cout << "Hello, i am Form Copy Constructor" << std::endl;
	this->_Sign = false;
	*this = rhs;
	return ;
}

Form &Form::operator=(const Form & rhs)
{
	std::cout << "Hello, i am Form operator assignment" << std::endl;
	this->_Name = rhs.getName();
	this->_Sign = rhs.getSign();
	this->_Sgrade = rhs.getSgrade();
	this->_Egrade = rhs.getEgrade();
	/*assigner les valeur rhs dans this*/
	*this = rhs;
	return (*this);
}

Form::~Form(void)
{
	std::cout << "Hello, i am Form Destructor" << std::endl;
	return ;
}

			////////////////////////////////
			///			Fonction		////
			////////////////////////////////

			/*-----------GET-----------*/
std::string	Form::getName(void)const
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

			/*-----------SET-----------*/
void	Form::setName(std::string name)
{
	this->_Name = name;
}

void 	Form::setSgrade(unsigned int grade)
{
	if (grade <= 150 && grade > 0)
		this->_Sgrade = grade;
	else
		std::cout << "This grade is invalid to initialize the Sgrade" << std::endl;
}

void 	Form::setEgrade(unsigned int grade)
{
	if (grade <= 150 && grade > 0)
		this->_Egrade = grade;
	else
		std::cout << "This grade is invalid to initialize the Sgrade" << std::endl;
}

		/*-----------function------------------*/
void	Form::high(int i, int min, int grade)
{
	try
	{
		if (grade - i <= min)
			throw std::exception();
		else
			grade -= i;
	}
	catch (std::exception e)
	{
		this->GradeTooHighException();
	}
}

void	Form::low(int i, int max, int grade)
{
	try
	{
		if (grade + i > max)
			throw std::exception();
		else
			grade += i;
	}
	catch (std::exception e)
	{
		this->GradeTooLowException();
	}
}

void	Form::GradeTooHighException(void)
{
	std::cout << "Invalid!, You're Grade it's too high to be affect" << std::endl;
}

void	Form::GradeTooLowException(void)
{
	std::cout << "Invalid!, You're Grade it's too low to be affect" << std::endl;
}

void	Form::beSigned(Bureaucrat br)
{
	if ((int)br.getGrade() >= (int)this->_Sgrade)
		this->_Sign = true;
	else
		this->low(br.getGrade(), this->_Sgrade, this->_Egrade);
}

std::ostream & operator << (std::ostream & cout, const Form & rhs)
{
	// Envoi sur le flot sortie des membres de objet en utilisant
	// les possibilités classiques de << pour les types de base
	// c’est-à-dire des instructions de la forme :
	// sortie << ..... ;
	cout << "Name is " << rhs.getName() << std::endl;
	if (rhs.getSign() == 0)
		cout << "Sign is not signed..." << std::endl;
	else
		cout << "Sign is signed!!" << std::endl;
	cout << "The grade to have for sign is " << rhs.getSgrade() << std::endl;
	cout << "The grade to have for execute is " << rhs.getEgrade() << std::endl;	
	return (cout);
}