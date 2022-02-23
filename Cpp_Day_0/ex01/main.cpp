/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:32:50 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/02/23 11:59:33 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "Contact.Class.hpp"
#include "PhoneBook.Class.hpp"

int	main(int argc, char **argv)
{
	PhoneBook	repo;

	(void)argv;
	if (argc == 1)
	{
		repo.start_phone();
		return (0);
	}
	std::cout << "Argument(s) are invalid" << std::endl;
	return (0);
}