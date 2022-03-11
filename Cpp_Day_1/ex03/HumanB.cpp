/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 09:02:01 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/11 14:45:42 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name_b)
{
	this->name = name_b;
	this->b_weapon = NULL;
	return ;
}

HumanB::~HumanB()
{
	return ;
}

void    HumanB::attack()
{
	std::cout << this->name << " attacks with their ";
	if (this->b_weapon)
		std::cout << this->b_weapon->getType() << std::endl;
	else
		std::cout << std::endl;
}

/* Une reference est : toujours derefencee + jamais nulle (ne peut etre intialise) et "constante"
*/ 
//voir comment le cpp fonctionne avec les rvalues (copies envoyees en permanence)
void	HumanB::setWeapon(Weapon &weap)
{
	//envoyer l adresse car elle est deferencee
	this->b_weapon = &weap;
}