/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:30:27 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/22 09:45:08 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

			///////////////////////////////////
			///			Canonical			///
			///////////////////////////////////
Brain::Brain(void)
{
	std::cout << "Hello, i am Brain Constructor" << std::endl;
	int i = 0;
	while(i < 100)
	{
		this->ideas[i] = "Ideas";
		i++;
	}
	return ;
}

Brain::Brain(const Brain & rhs)
{
	std::cout << "Hello, i am Brain Copy Constructor" << std::endl;
	int i = 0;
	while (i < 100)
	{
		this->ideas[i] = rhs.ideas[i];
		i++;
	}
	return ;
}

Brain &Brain::operator=(const Brain &rhs)
{
	std::cout << "Hello, i am Brain operator assignment" << std::endl;
	int i = 0;
	while (i < 0)
	{
		this->ideas[i] = rhs.ideas[i];
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Hello, i am Brain Destructor" << std::endl;
	return ;
}

			///////////////////////////////////
			///			Function			///
			///////////////////////////////////
