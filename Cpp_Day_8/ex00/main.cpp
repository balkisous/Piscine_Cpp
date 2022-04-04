/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:37:13 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/04/04 14:23:40 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
//	int tab[4] = {1, 2, 3, 4};
//		L-> au lieu de chaque fois creer un tableau avec une taille fix
//	on va créer un vector avec un type spécifique qui va permettre de metter des elements 
//	dedans sans avoir a définir une taille fix

	std::vector<int> v;
	// on crée un vector de type int
	// https://www.geeksforgeeks.org/initialize-a-vector-in-cpp-different-ways/
	std::cout << "Size of my vector is " << sizeof(v) << " -> par defaut c'est 24" << std::endl;
	std::cout << "v.size() = " << v.size() << " -> mais la taille est a zero" << std::endl << std::endl;

	v.push_back(42);
	v.push_back(56);
	v.push_back(112);
	v.push_back(5);

	std::cout << "Size of my vector is " << sizeof(v) << " -> par defaut c'est 24" << std::endl;
	std::cout << "v.size() = " << v.size() << " on ajouter 4 elements et le vector est bien a jour" << std::endl;


	std::vector<int>::iterator i;
	// un ptr qui va me permetre de parcourir mon vector
	// en utilisant un iterator du meme type que mon vector 
	// on peut faire une boucle for pour parcourir le vector
	for (i = v.begin(); i != v.end(); i++)
		std::cout << *i << std::endl << std::endl;
	// c'était juste pour tester les iterators on n'en a pas besoin pour l'exo

	std::cout << ".........false case........." << std::endl;
	try{
		easyfind(v, 3);
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << ".........true case........." << std::endl;
	try{
		easyfind(v, 112);
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}