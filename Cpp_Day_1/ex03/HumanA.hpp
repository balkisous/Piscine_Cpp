/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 09:01:57 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/02/24 11:41:05 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

#include <iostream>

class Weapon; 

class	HumanA
{

public :

		HumanA(std::string name_a, Weapon &weap);
		
		~HumanA();

		std::string	name;
		Weapon		&a_weapon;
				
		void		attack();

private :
		
};

# endif