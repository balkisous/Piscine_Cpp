/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 10:21:17 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/04/01 11:47:36 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main(void)
{

	Data		*data = new Data(10);
	uintptr_t	u = 0;		//-> uintptr_t might be the same size as a void*. It might be larger. It could conceivably be smaller,


	// first
	// une fonction à faire -> uniptr_t serialize(Data* ptr);
	// convertit le ptr de Data vers un entier non signé uniptr_t
	std::cout << std::endl << "Le pointeur de data est : " << data << std::endl;
	u = serialize(data);
	std::cout << "Le pointeur temporaire de uintptr_t est : " << u << std::endl << std::endl;
	// second
	// une fonction à faire -> Data *deserialize(uniptr_t raw);
	// convert raw vers Data *
	std::cout << "On re cast u vers Data * on obtient le pointeur : ";
	std::cout << deserialize(u) << std::endl;
	std::cout << "On remarque que c'est le meme pointeur!!" << std::endl << std::endl;

	// third
	// programe pour tester 
	// use serialize sur Data et passer la valeur de retour a deserialize
	std::cout << "On refait la meme chose mais en appelant serialize dans deserialize sans passer par un u temporaire" << std::endl;
	std::cout << "Le pointeur est : " << deserialize(serialize(data)) << std::endl;
	std::cout << "Le pointeur est bien le meme, Success!!" << std::endl << std::endl;
	
	delete data;
	return (0);
}