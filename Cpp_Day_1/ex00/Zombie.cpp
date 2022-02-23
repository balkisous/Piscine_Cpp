/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:28:45 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/02/23 18:34:52 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Je suis le destructeur Zombie! brrr.." << std::endl;
	return ;
}

void	Zombie::announce(void)
{
	if (this->_name == "Foo")
		std::cout << this->_name;
	else
		std::cout << "<" << this->_name << ">";
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::get_name(void) const
{
	return (this->_name);
}