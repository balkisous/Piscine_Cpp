/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 13:14:05 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/04/02 14:59:10 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void	my_function(T const & arg)
{
	std::cout << "my_function: " << static_cast<T>(arg) << std::endl;
}

template <typename T>
void	iter(T *t, const int len, void(*f)(T const &arg))
{
	int i = 0;
	while (i < len)
	{
		(f)(t[i]);
		i++;
	}
}

# endif