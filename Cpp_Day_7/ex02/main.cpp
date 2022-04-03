/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 11:24:26 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/04/03 14:39:06 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <string>

int main (void)
{
	std::cout << ".........Int........." << std::endl;
	Array<int> intArray(3);
	intArray[0] = 10;
	intArray[1] = 20;
	intArray[2] = 30;

	std::cout << intArray << std::endl;
	Array<int> intcopy(intArray);
	std::cout << intcopy << std::endl;
	
	intArray[0] = 1;
	intArray[1] = 2;
	intArray[2] = 3;
	try{
		intArray[10] = 4;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << intArray << std::endl;


	std::cout << std::endl << ".........String........." << std::endl;
	Array<std::string> stringArray(5);
	stringArray[0] = "qwerty";
	stringArray[1] = "azerty";
	stringArray[2] = "Bonjour";
	stringArray[3] = "Hello";
	stringArray[4] = "Hola";
	try{
		stringArray[45] = "Aloha";
	}
	catch (std::exception & e ){
		std::cout << e.what() << std::endl;
	}
	std::cout << stringArray << std::endl;
	
	return (0);
}

// https://www.youtube.com/watch?v=ZudCUY2oNKg
// Tuto qui m'a permis de faire une classe template