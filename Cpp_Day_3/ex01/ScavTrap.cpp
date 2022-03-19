/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:36:16 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/19 10:09:02 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Default construtor ScavTrap called" << std::endl;
	return ;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{

	std::cout << "Constructeur string ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & rhs)
{
	*this = rhs;
	return ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap & rhs)
{
	(void)rhs;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor ScavTrap Called" << std::endl;
	return ;
}

void	ScavTrap::attack(std::string name)
{
	std::cout << "Function Attack called in ScavTrap Class" << std::endl;
	this->ClapTrap::attack(name);
}

void	ScavTrap::guardGate(void)
{
	std::cout << "Scav Trap came into guard Gate mode" << std::endl;
}