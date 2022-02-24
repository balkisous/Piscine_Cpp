/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 09:02:21 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/02/24 12:22:27 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon{

public :

		Weapon(std::string type);
		~Weapon();
		
		std::string	getType();
		void		setType(std::string type);

private :
		std::string	_type;

};


# endif