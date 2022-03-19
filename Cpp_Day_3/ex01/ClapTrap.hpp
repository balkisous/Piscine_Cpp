/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:47:17 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/19 13:29:16 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#ifndef CLAPTRAP_HPP
//# define CLAPTRAP_HPP
#pragma once
#include <iostream>

class ClapTrap
{
	public :
		//Constructor//
		ClapTrap(void);							//canonical constructeur par defaut
		ClapTrap(std::string Name);
		ClapTrap(ClapTrap const & rhs);				//canonical constructeur de recopie

		//Function//
		ClapTrap & operator= ( const ClapTrap & fx);	//canonical surcharge de l'operation d'affectation
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void		annonce(void)const;

		std::string	getName(void)const;
		int			getHitp(void)const;
		int			getEnergyp(void)const;
		int			getAttackd(void)const;
		
		//Desstructor//
		virtual ~ClapTrap(void);				//canonical destructeur par defaut
												//virtal avoid memory leaks in case of inheritance class

	//les enfants heriteront des attributs protected 
	protected :

		std::string	_Name;
		int			_Hit_point;
		int			_Energy_point;
		int			_Attack_dammage;
		
};

//# endif