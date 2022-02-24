/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 11:32:14 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/02/24 15:29:33 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

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
		while (i < new_upper.length())
		{
			std::cout << (char)std::toupper(new_upper[i]);
			i++;
		}
		i = 0;
		j++;
	}
	std::cout << std::endl;
	return (0);
}
