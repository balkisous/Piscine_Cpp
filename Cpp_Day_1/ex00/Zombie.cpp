/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:28:45 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/02/23 13:47:08 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
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