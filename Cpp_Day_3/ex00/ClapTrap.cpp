/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:47:20 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/17 11:14:52 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)	//constructor par defaut
{
	std::cout << "Default constructor ClapTrap called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string Name) : _Name(Name), _Hit_point(10), _Energy_point(0), _Attack_dammage(0)
{
	std::cout << "Constructor ClapTrap called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & rhs)
{
	//std::cout << "Copy Constructor called" << std::endl;
	*this = rhs;
	return ;
}

ClapTrap &ClapTrap::operator=(const ClapTrap & rhs)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	//ici mettre les valeur equals
	(void)rhs;
	return *this ;
}

ClapTrap::~ClapTrap(void)		//destructor par defaut
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

//////////////////////////////////////////////////
///				Function membres			   ///
//////////////////////////////////////////////////


void	ClapTrap::attack(const std::string &target)
{
	// - 1 point to Hit_point
	if (this->_Hit_point <= 0)
		std::cout << "No more Hit point, you can't attack!" << std::endl;
	this->_Hit_point -= 1;
	std::cout << "ClapTrap " << this->_Name << " attacks "<< target <<" , causing ";
	std::cout << this->_Attack_dammage <<" points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_Hit_point <= 0)
		std::cout << "No more Hit point, you can't attack!" << std::endl;
	std::cout << "ClapTrap " << this->_Name << " lose ";
	std::cout << amount << " Hit points !"<< std::endl;
	this->_Hit_point -= amount;
	std::cout << "ClapTrap's Hit points = " << this->_Hit_point << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	// - 1 point to Hit_point
	if (this->_Hit_point <= 0)
		std::cout << "No more Hit point, you can't attack!" << std::endl;
	this->_Hit_point -= 1;
	std::cout << "ClapTrap " << this->_Name << " win ";
	std::cout << amount << "Hit points !" << std::endl;
	this->_Hit_point += amount;
	std::cout << "ClapTrap's Hit points = " << this->_Hit_point << std::endl;
}

std::string	ClapTrap::getName(void) const
{
	return (this->_Name);
}



/*
	ClapTrap.attack() -> sa cible perds _Attack_damage point && Energy point -= 1
	ClapTrap.beRepaired() -> il gagne _Hit_point += amount && Energy point -= 1
	ClapTrap.take.Dammage() -> _Hit_point -= amount
*/