/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:36:16 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/19 13:59:30 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(), _gate(false)
{
	std::cout << "Default construtor ScavTrap called" << std::endl;
	this->_Hit_point = 100;
	this->_Energy_point = 50;
	this->_Attack_dammage = 20;
	return ;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name), _gate(false)
{
	std::cout << "Constructeur string ScavTrap called" << std::endl;
	this->_Hit_point = 100;
	this->_Energy_point = 50;
	this->_Attack_dammage = 20;
}

ScavTrap::ScavTrap(ScavTrap const & rhs) : ClapTrap(rhs)
{
	*this = rhs;
	return ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap & rhs)
{
	ClapTrap::operator=(rhs);
	this->_gate = rhs._gate;
	std::cout << "ScavTrap assignement operator called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor ScavTrap Called" << std::endl;
	return ;
}

void	ScavTrap::attack(std::string name)
{
	//	surcharge operator function
	//	on redefinie une fonction qui existe deja dans la classe parent
	if (this->_Energy_point <= 0)
		std::cout << "Scava Trap class : No more Energy point, you can't attack!" << std::endl;
	this->_Energy_point -= 1;
	std::cout << "ScavTrap " << this->_Name << " attacks "<< name << " , causing ";
	std::cout << this->_Attack_dammage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (this->_Energy_point <= 0)
		std::cout << "No more Energy point, you can't came to guard Gate mode!" << std::endl;
	else
	{
		this->_gate = true;
		std::cout << "Scav Trap came into guard Gate mode" << std::endl;
	}
}
int		ScavTrap::getGate(void) const
{
	return(this->_gate);
}


std::ostream & operator << (std::ostream & cout, const ScavTrap & st)
{
	// Envoi sur le flot sortie des membres de objet en utilisant
	// les possibilités classiques de << pour les types de base
	// c’est-à-dire des instructions de la forme :
	// sortie << ..... ;
	std::cout << "Name = ";
	cout << st.getName() << std::endl;
	std::cout << "Hit points = ";
	cout << st.getHitp() << std::endl;
	std::cout << "Energy points = ";
	cout << st.getEnergyp() << std::endl;
	std::cout << "Attack damage = ";
	cout << st.getAttackd() << std::endl;
	std::cout << "Gate mode is ";
	if (st.getGate() == 0)
		std::cout << "not activate..." << std::endl;
	else
		cout << "activate!!" << std::endl;
	return (cout);
}