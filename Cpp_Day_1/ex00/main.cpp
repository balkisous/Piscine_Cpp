/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:28:32 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/02/23 18:41:33 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



//base class / class parent animal
//class enfant / derived class  qui herite du parent 

int main(void)
{
	//On creer le zombie dans la fonction
	randomChump("Foo");
	//On ne peut pas apppeler le Zombie ;-;
	//--->Can't call the zombie because his is already dead

	//On creer le zombie en allouant dans la fonction 
	Zombie *s_zombie = newZombie("Bob");
	//En sortant le zombie est encore vivant donc on peut l'appeler 
	s_zombie->announce();
	
	//ici le s_zombie est mort (delete est un "equivalent" de free)
	delete s_zombie;
	return (0);
}
