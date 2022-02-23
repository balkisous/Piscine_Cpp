/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balkis <balkis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:28:32 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/02/23 22:19:51 by balkis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"



//base class / class parent animal
//class enfant / derived class  qui herite du parent 

int main(void)
{
	Zombie	*Th = newZombie("Thomas");
	Th->announce();
	delete Th;

	//On crée le zombie dans la fonction randomChump
	randomChump("Foo");
	//On ne peut pas apppeler le Zombie dans le main ;-;
	//--->Can't call the zombie because his is already dead

	//On creer le zombie en alouant dans la fonction 
	Zombie *s_zombie = newZombie("Bob");
	//En sortant le zombie est encore vivant donc on peut l'appeler 
	s_zombie->announce();
	//ici le s_zombie est mort (delete est un "equivalent" de free)
	delete s_zombie;

	randomChump("Toto");

	return (0);
}
