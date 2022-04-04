/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:43:38 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/04/04 16:20:24 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

			///////////////////////////////////
			///			Canonical			///
			///////////////////////////////////

Span::Span(void) : size(0)
{
	std::cout << "Hello, i am Span Constuctor" << std::endl;
	return ;
}

Span::Span(unsigned int N) : size(N)
{
	std::cout << "Hello, i am Span Params Constuctor" << std::endl;
	return ;
}

Span::Span(const Span & rhs)
{
	std::cout << "Hello, i am Span Copy Constructor" << std::endl;
	this->vec = rhs.vec;
	this->size = rhs.getSize();
	//*this = rhs;
	return ;
}

Span &Span::operator=(const Span & rhs)
{
	std::cout << "Hello, i am Span operator assignment" << std::endl;
	this->vec = rhs.vec;
	this->size = rhs.getSize();
	/*assigner les valeur rhs dans this*/
	return (*this);
}

Span::~Span(void)
{
	std::cout << "Hello, i am Span Destructor" << std::endl;
	return ;
}

			///////////////////////////////////
			///			Fonction			///
			///////////////////////////////////

void	Span::addNumber(int n)
{
	if (this->vec.size() >= this->size)
		throw Span::AlreadyFill();
	this->vec.push_back(n);
}

int		Span::shortestSpan(void)
{
	int		tmp;
	std::vector<int>::const_iterator	it = this->vec.begin();

	if (this->vec.size() == 0)
		throw Span::NotFound();
	tmp = (int)(*it);
	while (it != this->vec.end())
	{
		if (*it < tmp)
			tmp = *it;
		it++;
	}
	return(tmp);
}

int		Span::longestSpan(void)
{
	int		tmp;
	std::vector<int>::const_iterator	it = this->vec.begin();

	if (this->vec.size() == 0)
		throw Span::NotFound();
	tmp = (int)(*it);
	while (it != this->vec.end())
	{
		if (*it > tmp)
			tmp = *it;
		it++;
	}
	return(tmp);
}


void	Span::display(void) const
{
	std::vector<int>::const_iterator it;
	for (it = this->vec.begin(); it != this->vec.end(); it++)
		std::cout << *it << std::endl;
}


std::ostream & operator << (std::ostream & cout, const Span & rhs)
{
	// Envoi sur le flot sortie des membres de objet en utilisant
	// les possibilités classiques de << pour les types de base
	// c’est-à-dire des instructions de la forme :
	// sortie << ..... ;
	(void)rhs;
	return (cout);
}
