/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:47:20 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/19 09:08:53 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :  _Name("Unknow"), _Hit_point(100), _Energy_point(50), _Attack_dammage(20) //constructor par defaut
{
	std::cout << "Default constructor ClapTrap called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string Name) : _Name(Name), _Hit_point(100), _Energy_point(50), _Attack_dammage(20)
{
	std::cout << "Constructor string ClapTrap called" << std::endl;
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
	this->_Name = rhs.getName();
	this->_Hit_point = rhs.getHitp();
	this->_Energy_point = rhs.getEnergyp();
	this->_Attack_dammage = rhs.getAttackd();
	return *this ;
}

ClapTrap::~ClapTrap(void)		//destructor par defaut
{
	std::cout << "Destructor ClapTrap called" << std::endl;
	return ;
}

//////////////////////////////////////////////////
///				Function membres			   ///
//////////////////////////////////////////////////


void	ClapTrap::attack(const std::string &target)
{
	if (this->_Energy_point <= 0)
		std::cout << "No more Energy point, you can't attack!" << std::endl;
	this->_Energy_point -= 1;
	std::cout << "ClapTrap " << this->_Name << " attacks "<< target << " , causing ";
	std::cout << this->_Attack_dammage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_Energy_point <= 0)
		std::cout << "No more Energy point, you can't take Damage!" << std::endl;
	std::cout << "ClapTrap " << this->_Name << " lose ";
	std::cout << amount << " Hit points !"<< std::endl;
	this->_Hit_point -= amount;
	
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_Energy_point <= 0)
		std::cout << "No more Energy point, you can't be repaired!" << std::endl;
	this->_Energy_point -= 1;
	std::cout << "ClapTrap " << this->_Name << " win ";
	std::cout << amount << " Hit points !" << std::endl;
	this->_Hit_point += amount;
}

/*
	ClapTrap.attack() -> sa cible perds _Attack_damage point && Energy point -= 1
	ClapTrap.take.Dammage() -> _Hit_point -= amount
	ClapTrap.beRepaired() -> il gagne _Hit_point += amount && Energy point -= 1
*/

//////////////////////////////////////////////////
///				Function Get				   ///
//////////////////////////////////////////////////

std::string	ClapTrap::getName(void) const
{
	return (this->_Name);
}

int		ClapTrap::getHitp(void) const
{
	return (this->_Hit_point);
}

int		ClapTrap::getEnergyp(void) const
{
	return (this->_Energy_point);
}

int		ClapTrap::getAttackd(void) const
{
	return (this->_Attack_dammage);
}

void	ClapTrap::annonce(void)const
{
	std::cout << std::endl;
	std::cout << "ClapTrap's Energy points = " << this->_Energy_point << std::endl;
	std::cout << "ClapTrap's Hit points = " << this->_Hit_point << std::endl;
	std::cout << std::endl;
}