/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:47:14 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/19 16:44:54 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//CHANGER LE MAIN
int main(void)
{
	FragTrap frag("Tintin");
	std::cout << "-------------- We create the Instance ------------------" << std::endl;
	std::cout << frag << std::endl;

	std::cout << "-------------- Attack function ------------------" << std::endl;
	frag.attack("Milou");
	std::cout << frag << std::endl;
	
	
	std::cout << "-------------- Dammage function ------------------" << std::endl;
	frag.ClapTrap::takeDamage(12);
	std::cout << frag << std::endl;


	std::cout << "-------------- High Fives function ------------------" << std::endl;
	frag.highFivesGuys();
	std::cout << frag << std::endl;

	return (0);    
}