/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:47:17 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/17 15:15:30 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public :
		//Constructor//
		ClapTrap(ClapTrap const & rhs);				//canonical consterur de recopie

		//Function//
		ClapTrap & operator= ( const ClapTrap & fx);	//canonical surcharge de l'operation d'affectation
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string	getName(void)const;
		void		annonce(void)const;
		
		//Desstructor//
												//virtal avoid memory leaks in case of inheritance class


	protected :
		ClapTrap(void);							//canonical constructeur par defaut
		ClapTrap(std::string Name);
		virtual ~ClapTrap(void);				//canonical destructeur par defaut
		
		std::string	_Name;
		int			_Hit_point;
		int			_Energy_point;
		int			_Attack_dammage;

	private :
		
};

# endif