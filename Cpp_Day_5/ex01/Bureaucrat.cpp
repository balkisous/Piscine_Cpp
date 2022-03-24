/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 07:41:50 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/24 11:44:18 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

			///////////////////////////////////
			///			Canonical			///
			///////////////////////////////////

Bureaucrat::Bureaucrat(void)
{
	std::cout << "Hello, i am Bureaucrat Constuctor" << std::endl;
	this->_Name = "Unknow";
	this->_Grade = 150;
	return ;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _Name(name), _Grade(grade)
{
	std::cout << "Hello, i am Bureaucrat params Constructor" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat & rhs)
{
	std::cout << "Hello, i am Bureaucrat Copy Constructor" << std::endl;
	*this = rhs;
	return ;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat & rhs)
{
	std::cout << "Hello, i am Bureaucrat operator assignment" << std::endl;
	this->_Name = rhs.getName();
	this->_Grade = rhs.getGrade();
	/*assigner les valeur rhs dans this*/
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Hello, i am Bureaucrat Destructor" << std::endl;
	return ;
}

			///////////////////////////////////
			///			Fonction			///
			///////////////////////////////////

std::string	Bureaucrat::getName(void)const
{
	return (this->_Name);
}

unsigned int	Bureaucrat::getGrade(void)const
{
	return (this->_Grade);
}

void	Bureaucrat::setName(std::string name)
{
	this->_Name = name;
}

void	Bureaucrat::setGrade(unsigned int grade)
{
	if (grade > 150 || grade <= 0)
		std::cout << "Grade canno't be set" << std::endl;
	else
		this->_Grade = grade;
}

void	Bureaucrat::high(int i)
{
	try
	{
		if (this->_Grade - i <= 0)
			throw std::exception();
		else
			this->_Grade -= i;
	}
	catch (std::exception e)
	{
		this->GradeTooHighException();
	}
}

void	Bureaucrat::low(int i)
{
	try
	{
		if (this->_Grade + i > 150)
			throw std::exception();
		else
			this->_Grade += i;
	}
	catch (std::exception e)
	{
		this->GradeTooLowException();
	}
}

void	Bureaucrat::GradeTooHighException(void)
{
	std::cout << "Invalid!, You're Grade it's too high to be affect" << std::endl;
}

void	Bureaucrat::GradeTooLowException(void)
{
	std::cout << "Invalid!, You're Grade it's too low to be affect" << std::endl;
}

void	Bureaucrat::signForm(const Form & fr)
{
	if (fr.getSign() == true)
		std::cout << this->_Name << " signed " << fr.getName() << std::endl;
	else
		std::cout << this->_Name << "couldn't sign " << fr.getName() << "because not already sign" << std::endl;	
}

std::ostream & operator << (std::ostream & cout, const Bureaucrat & rhs)
{
	// Envoi sur le flot sortie des membres de objet en utilisant
	// les possibilités classiques de << pour les types de base
	// c’est-à-dire des instructions de la forme :
	// sortie << ..... ;
	cout << rhs.getName();
	std::cout << ", bureaucrat grade ";
	cout << rhs.getGrade();
	cout << "." << std::endl;
	return (cout);
}
