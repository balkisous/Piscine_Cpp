/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:36:16 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/17 15:38:15 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Default construtor ScavTrap called" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor ScavTrap Called" << std::endl;
	return ;
}

void	ScavTrap::attack(void)
{
	std::cout << "attack in ScavTrap class" << std::endl;
}