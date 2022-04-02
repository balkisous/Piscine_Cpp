/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 20:18:38 by balkis            #+#    #+#             */
/*   Updated: 2022/04/02 12:31:42 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP



#include <iostream>

template <typename T>
void	swap(T & a, T & b)
{
	T temp;

	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T &	min(T & a, T & b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T>
T &	max(T & a, T & b)
{
	if (a > b)
		return (a);
	else
		return (b);
}


# endif
