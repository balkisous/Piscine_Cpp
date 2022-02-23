/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balkis <balkis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 22:24:42 by balkis            #+#    #+#             */
/*   Updated: 2022/02/23 23:08:29 by balkis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << " dead xp" << std::endl;
	return ;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}

void	Zombie::announce() const
{
	std::cout << this->_name << " Brrraiiiinnzzzz..." << std::endl;
}