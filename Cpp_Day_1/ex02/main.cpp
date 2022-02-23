/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balkis <balkis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 23:15:27 by balkis            #+#    #+#             */
/*   Updated: 2022/02/23 23:45:30 by balkis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	s_begin;
	std::string	*stringPTR;
	std::string &stringREF = s_begin;

	std::cout << "L'adresse de la string en mémoire est " << s_begin << std::endl;
	std::cout << "L'adresse stockée dans la string est " << stringPTR << std::endl;
	std::cout << "L’adresse stockée dans stringREF est " << stringREF << std::endl;

	std::cout << "La valeur de la string est " << s_begin << std::endl;
	std::cout << "La valeur pointée par stringPTR est " << stringPTR << std::endl;
	std::cout << "La valeur pointée par stringREF est " << stringREF << std::endl;

	return (0);

}
