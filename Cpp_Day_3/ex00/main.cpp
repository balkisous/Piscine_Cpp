/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:47:14 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/17 11:05:46 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Bou("Boubou");
	std::cout << "We create " << Bou.getName() << std::endl;

	Bou.attack("Tintin");

	Bou.beRepaired(2);

	Bou.takeDamage(15);
	
	std::cout << "------------ fonctione plus normalement ------------------" << std::endl;

	Bou.attack("Loulou");

	Bou.beRepaired(22);

	Bou.takeDamage(10);
	
	return (0);    
}