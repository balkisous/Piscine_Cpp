/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:43:57 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/19 16:47:34 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "Default FragTrap constructor called" << std::endl;
	this->_Hit_point = 100;
	this->_Energy_point = 100;
	this->_Attack_dammage = 30;
	this->_hfives = false;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap string constructor called" << std::endl; 
	this->_Hit_point = 100;
	this->_Energy_point = 100;
	this->_Attack_dammage = 30;
	this->_hfives = false;
	return ;
}

FragTrap::FragTrap(const FragTrap & rhs)
{
	std::cout << "Copy FragTrap constructor called" << std::endl;
	*this = rhs;
	return ;
}

FragTrap &FragTrap::operator=(const FragTrap & rhs)
{
	std::cout << "Copy FragTrap assignment constructor called" << std::endl;
	this->_Name = rhs.getName();
	this->_Hit_point = rhs.getHitp();
	this->_Energy_point = rhs.getEnergyp();
	this->_Attack_dammage = rhs.getAttackd();
	return *this ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
	return;
}

void    FragTrap::highFivesGuys(void)
{
	if (this->_Energy_point <= 0)
		std::cout << "No more Energy point, you can't do a high fives!" << std::endl;
	else
	{
		std::string	cmd;
		std::cout << "Give a high fives!" << std::endl;
		std::getline(std::cin, cmd);
		if (cmd == "high fives")
		{
			this->_hfives = true;
			std::cout << "Thanks for this high fives!!^^" << std::endl;
		}
		else
			std::cout << "Boriiing..." << std::endl;
	}
}

int	FragTrap::getHFive(void) const
{
	return (this->_hfives);
}


std::ostream & operator << (std::ostream & cout, const FragTrap & ft)
{
	// Envoi sur le flot sortie des membres de objet en utilisant
	// les possibilités classiques de << pour les types de base
	// c’est-à-dire des instructions de la forme :
	// sortie << ..... ;
	std::cout << "Name = ";
	cout << ft.getName() << std::endl;
	std::cout << "Hit points = ";
	cout << ft.getHitp() << std::endl;
	std::cout << "Energy points = ";
	cout << ft.getEnergyp() << std::endl;
	std::cout << "Attack damage = ";
	cout << ft.getAttackd() << std::endl;
	std::cout << "You ";
	if (ft.getHFive() == 0)
		std::cout << "didn't give me a high fives..." << std::endl;
	else
		cout << "already give me a high fives Big Boss!!" << std::endl;
	return (cout);
}