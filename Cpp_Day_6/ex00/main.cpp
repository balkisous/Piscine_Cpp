/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 19:13:05 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/31 17:40:34 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Invalid arguments, they must be only one argument!" << std::endl;
		return (1);
	}
	// On crée une class ou il un char, un int, un float, un float litteral, un double et un double littéral
	// On l'instancie
	Convert convert(argv[1]);
	// Ici on envoie l'argument recu a une fonction membre de notre instance
	// On affiche à l'aide du fonction membre de notre instance
	std::cout << convert;
	// And That's it!
	return (0);
}