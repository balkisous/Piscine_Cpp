/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balkis <balkis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:07:52 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/09 10:38:24 by balkis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main (int argc, char **argv)
{
	std::string level;
	Karen minikaren;

	if (argc == 2)
	{
		level = argv[1];
		if (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR")	
			return (std::cout << "Wrong message error" << std::endl, 0);
		minikaren.complain(level);		
	}
	else
		std::cout << "Error, Wrong number of arguments!" << std::endl;
	return (0);
	/* 
	minikaren.complain("DEBUG");

	std::cout << "--------" << std::endl;

	minikaren.complain("ERROR");

	std::cout << "--------" << std::endl;

	minikaren.complain("bchjdsbd");
	
	std::cout << "--------" << std::endl;
	
	minikaren.complain("");

	std::cout << "--------" << std::endl;
	
	minikaren.complain("INFO");
	
	std::cout << "--------" << std::endl;*/
	
	return (0);
}