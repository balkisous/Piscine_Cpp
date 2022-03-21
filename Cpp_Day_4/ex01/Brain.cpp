/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:02:38 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/21 15:09:00 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

			/////////////////////////////////
			///			Cannonical		  ///
			/////////////////////////////////
Brain::Brain(void)
{
	std::cout << "Hello, i am Brain Constructor" << std::endl;
	return ;
}

Brain::Brain(const Brain & rhs)
{
	std::cout << "Hello, i am Brain Copy Constructor" << std::endl;
	*this = rhs;
	return ;
}

Brain &Brain::operator=(const Brain &rhs)
{
	std::cout << "Hello, i am Brain operator assignment" << std::endl;
	this->type = rhs.type;
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Hello, i am Brain Destructor" << std::endl;
	return ;
}