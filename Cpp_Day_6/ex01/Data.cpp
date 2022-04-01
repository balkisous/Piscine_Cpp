/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:43:38 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/04/01 11:37:37 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

			///////////////////////////////////
			///			Canonical			///
			///////////////////////////////////

Data::Data(void)
{
	std::cout << "Hello, i am Data Constuctor" << std::endl;
	return ;
}

Data::Data(int i) : data(i)
{
	std::cout << "Hello, i am params Data Constuctor" << std::endl;
	return ;
}


Data::Data(const Data & rhs)
{
	std::cout << "Hello, i am Data Copy Constructor" << std::endl;
	*this = rhs;
	return ;
}

Data &Data::operator=(const Data & rhs)
{
	std::cout << "Hello, i am Data operator assignment" << std::endl;
	this->data = rhs.data;
	/*assigner les valeur rhs dans this*/
	return (*this);
}

Data::~Data(void)
{
	std::cout << "Hello, i am Data Destructor" << std::endl;
	return ;
}

			///////////////////////////////////
			///			Fonction			///
			///////////////////////////////////

std::ostream & operator << (std::ostream & cout, const Data & rhs)
{
	// Envoi sur le flot sortie des membres de objet en utilisant
	// les possibilités classiques de << pour les types de base
	// c’est-à-dire des instructions de la forme :
	// sortie << ..... ;
	cout << "data vaut " << rhs.data << std::endl;
	return (cout);
}
