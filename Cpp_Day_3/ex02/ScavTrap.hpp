/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:16:45 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/19 13:43:37 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();									//canonical: constrcuteur par defaut
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &rhs);				//canonical: constructeur de recopie
		ScavTrap & operator= (const ScavTrap & rhs);//canonical: surcharge de l'operator d'affectation
		virtual ~ScavTrap();						//canonical: destructeur par defaut

		void	attack(std::string name);
		void	guardGate(void);
		int		getGate(void) const;

	private:
		bool	_gate;
};
	std::ostream & operator << (std::ostream & sortie, const ScavTrap & st);
