/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:47:14 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/19 10:14:14 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scav("Tintin");

	scav.attack("Milou");
	scav.ClapTrap::takeDamage(12);
	std::cout << "------------ fonctione plus normalement ------------------" << std::endl;

	return (0);    
}