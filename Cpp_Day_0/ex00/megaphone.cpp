/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 11:32:14 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/02/19 15:01:45 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	std::string				new_upper;
	std::string::size_type	i;
	int						j;
	
	j = 1;
	i = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while(argv[j])
	{
		new_upper = argv[j];
		for (std::string::size_type i=0; i< new_upper.length(); ++i)
			std::cout << std::toupper(new_upper[i]) << std::endl;
		std::cout << new_upper << " ";
		//use fonction toupper and std::cout << for each argv[j] << std::endl
		j++;
	}
	std::cout << std::endl;
	return (0);
}
