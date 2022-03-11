/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 09:01:57 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/11 08:10:49 by bben-yaa         ###   ########.fr       */
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
				
		void		attack();

private :
		Weapon		&a_weapon;
		
};

# endif