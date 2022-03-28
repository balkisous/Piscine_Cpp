/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:43:38 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/28 13:48:49 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

			///////////////////////////////////
			///			Canonical			///
			///////////////////////////////////

Base::Base(void)
{
	std::cout << "Hello, i am Base Constuctor" << std::endl;
	return ;
}

Base::Base(const Base & rhs)
{
	std::cout << "Hello, i am Base Copy Constructor" << std::endl;
	*this = rhs;
	return ;
}

Base &Base::operator=(const Base & rhs)
{
	std::cout << "Hello, i am Base operator assignment" << std::endl;
	/*assigner les valeur rhs dans this*/
	return (*this);
}

Base::~Base(void)
{
	std::cout << "Hello, i am Base Destructor" << std::endl;
	return ;
}

			///////////////////////////////////
			///			Fonction			///
			///////////////////////////////////

std::ostream & operator << (std::ostream & cout, const Base & rhs)
{
	// Envoi sur le flot sortie des membres de objet en utilisant
	// les possibilités classiques de << pour les types de base
	// c’est-à-dire des instructions de la forme :
	// sortie << ..... ;

	return (cout);
}
