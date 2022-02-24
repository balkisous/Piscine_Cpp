/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 09:01:52 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/02/24 11:42:31 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name_a, Weapon &weap) : name(name_a), a_weapon(weap)
{
	return ;
}

HumanA::~HumanA()
{
	return ;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->a_weapon.getType() <<std::endl;
}