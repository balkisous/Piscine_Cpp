/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 11:38:21 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/04/04 14:13:18 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <vector>
#include <iostream>
#include <stdexcept>

// https://en.cppreference.com/w/cpp/iterator/begin
// cpp reference begin

template <typename T>
void	easyfind(T & stack, int n)
{
	std::vector<int>::iterator i;
	// un ptr qui va me permetre de parcourir mon vector
	// en utilisant un iterator du meme type que mon vector 
	// https://www.youtube.com/watch?v=O6MB4j7rUb8 ref pour comprendre les iterators
	
	i = std::find(stack.begin(), stack.end(), n);
	// std::find va chercher l'occurence et return le ptr
	// de la recurence ou la fin du vector s'il n'a pas été trouver

	if (i == stack.end())
		throw (std::runtime_error("Element was not found\n"));
	std::cout << "Success, the Element was found" << std::endl;
	std::cout << "The value is " << (*i) << std::endl;
	std::cout << "And the address is " << &(*i) << std::endl;
}

#endif