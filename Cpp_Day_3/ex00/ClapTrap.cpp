/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:47:20 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/16 16:25:19 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

ClapTrap::ClapTrap(void)	//constructor par defaut
{
	std::cout << "Default constructor ClapTrap called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string Name) : _Name(Name)
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
	return *this ;
}

virtual ClapTrap::~ClapTrap(void)		//destructor par defaut
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

//////////////////////////////////////////////////
///				Function membres			   ///
//////////////////////////////////////////////////


void	ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap " << this->_Name << " attacks "<< target <<" , causing ";
	std::cout << this->_Attack_dammage <<" points of damage!" << std::endl;
}
