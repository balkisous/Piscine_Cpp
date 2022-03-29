/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:43:38 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/29 15:51:27 by bben-yaa         ###   ########.fr       */
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
		
}

std::ostream & operator << (std::ostream & cout, const Intern & rhs)
{
	// Envoi sur le flot sortie des membres de objet en utilisant
	// les possibilités classiques de << pour les types de base
	// c’est-à-dire des instructions de la forme :
	// sortie << ..... ;

	return (cout);
}
