/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:07:52 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/11 08:31:29 by bben-yaa         ###   ########.fr       */
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
			return (std::cout << "[ Probably complaining about insignificant problems ]" << std::endl, 0);
		minikaren.complain(level);		
	}
	else
		std::cout << "Error, Wrong number of arguments!" << std::endl;
	return (0);
}