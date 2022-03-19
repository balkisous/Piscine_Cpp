/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:47:14 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/19 13:51:05 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scav("Tintin");
	std::cout << "-------------- We create the Instance ------------------" << std::endl;
	std::cout << scav << std::endl;

	std::cout << "-------------- Attack function ------------------" << std::endl;
	scav.attack("Milou");
	std::cout << scav << std::endl;
	
	
	std::cout << "-------------- Dammage function ------------------" << std::endl;
	scav.ClapTrap::takeDamage(12);
	std::cout << scav << std::endl;


	std::cout << "-------------- Guard Gate function ------------------" << std::endl;
	scav.guardGate();
	std::cout << scav << std::endl;

	return (0);    
}