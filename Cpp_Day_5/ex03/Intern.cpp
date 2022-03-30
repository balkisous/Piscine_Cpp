/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:43:38 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/30 19:12:20 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

			///////////////////////////////////
			///			Canonical			///
			///////////////////////////////////

Intern::Intern(void)
{
	std::cout << "Hello, i am Intern Constuctor" << std::endl;
	return ;
}

Intern::Intern(const Intern & rhs)
{
	std::cout << "Hello, i am Intern Copy Constructor" << std::endl;
	*this = rhs;
	return ;
}

Intern &Intern::operator=(const Intern & rhs)
{
	std::cout << "Hello, i am Intern operator assignment" << std::endl;
	(void)rhs;
	/*assigner les valeur rhs dans this*/
	return (*this);
}

Intern::~Intern(void)
{
	std::cout << "Hello, i am Intern Destructor" << std::endl;
	return ;
}

			///////////////////////////////////
			///			Fonction			///
			///////////////////////////////////

Form		* Intern::makeForm(std::string nameform, std::string targetform)
{
	if (nameform != "robotomy request" && nameform != "shrubberycreation request" && nameform != "presidentialpardon request")
	{
		std::cout << "This Form is invalid !!" << std::endl; 
		return NULL;
	}
	std::string	form[3]					= { "robotomy request", "shrubberycreation request", "presidentialpardon request"};	//-> tab string de tout les formulaires
	Form *ft_ptr[3]						= { new RobotomyRequestForm(targetform), new ShrubberyCreationForm(targetform), new PresidentialPardonForm(targetform)}; //-> tab pointeur des trois classes dérivé de Form 
	int	i 								= 0;
	while (i < 3)
	{
		if (nameform != form[i])
			delete ft_ptr[i];
		i++;
	}
	i = 0;
	while (i < 3)
	{
		if (nameform == form[i])
		{
			std::cout << "Intern creates " << form[i] << std::endl;
			return (ft_ptr[i]);
		}
		i++;
	}
	return (NULL);
}

std::ostream & operator << (std::ostream & cout, const Intern & rhs)
{
	// Envoi sur le flot sortie des membres de objet en utilisant
	// les possibilités classiques de << pour les types de base
	// c’est-à-dire des instructions de la forme :
	// sortie << ..... ;
	(void)rhs;
	return (cout);
}
