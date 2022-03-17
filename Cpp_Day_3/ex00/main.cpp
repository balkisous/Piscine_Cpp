/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:47:14 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/17 12:50:51 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Bou("Boubou");
	std::cout << "We create " << Bou.getName() << std::endl;

	Bou.attack("Tintin");
	Bou.annonce();
	
	Bou.beRepaired(2);
	Bou.annonce();

	Bou.takeDamage(15);
	Bou.annonce();
	

	Bou.attack("Loulou");
	Bou.annonce();

	Bou.beRepaired(22);
	Bou.annonce();

	Bou.takeDamage(10);
	Bou.annonce();
	
	
	Bou.attack("Loulou");
	Bou.attack("Loulou");
	Bou.attack("Loulou");
	Bou.attack("Loulou");
	Bou.attack("Loulou");
	Bou.attack("Loulou");
	
	std::cout << "------------ fonctione plus normalement ------------------" << std::endl;
	
	Bou.attack("Loulou");
	Bou.annonce();
	
	return (0);    
}