/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 07:41:50 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/28 19:13:25 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

			///////////////////////////////////
			///			Canonical			///
			///////////////////////////////////

Bureaucrat::Bureaucrat(void) :  _Name("Unknow")
{
	std::cout << "Hello, i am Bureaucrat Constuctor" << std::endl;
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

void	Bureaucrat::setGrade(unsigned int grade)
{
	if (grade > 150 || grade <= 0)
		std::cout << "Grade canno't be set" << std::endl;
	else
		this->_Grade = grade;
}

void	Bureaucrat::increment(void)
{
	try
	{
		if (this->_Grade - 1 <= 0)
			throw std::exception();
		else
			this->_Grade -= 1;
	}
	catch (std::exception e)
	{
		this->GradeTooHighException();
	}
}

void	Bureaucrat::decrement(void)
{
	try
	{
		if (this->_Grade + 1 > 150)
			throw std::exception();
		else
			this->_Grade += 1;
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
