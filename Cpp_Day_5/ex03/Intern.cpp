/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:43:38 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/29 16:04:59 by bben-yaa         ###   ########.fr       */
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
		return(std::cout << "This Form is invalid !!" << std::endl); 
	std::string	form[3]					= {"robotomy request", "shrubberycreation request", "presidentialpardon request"};	//-> tab string de tout les formulaires
	void (Form::*ft_ptr[3]) () const	= {& Form::RobotomyRequestForm, &Form::ShrubberyCreationForm, &Form::PresidentialPardonForm}; //-> tab pointeur des trois classes dérivé de Form 
	int	i 								= 0;
	while (i < 4)
	{
		if (nameform == form[i])
			(this->*ft_ptr[i])();
		i++;
	}
}

std::ostream & operator << (std::ostream & cout, const Intern & rhs)
{
	// Envoi sur le flot sortie des membres de objet en utilisant
	// les possibilités classiques de << pour les types de base
	// c’est-à-dire des instructions de la forme :
	// sortie << ..... ;

	return (cout);
}
