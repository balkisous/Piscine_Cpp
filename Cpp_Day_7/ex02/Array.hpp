/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balkis <balkis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:05:10 by balkis            #+#    #+#             */
/*   Updated: 2022/04/02 18:52:44 by balkis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>

class Array
{
	public :
		Array(void);
		Array(unsigned int n);
		Array(Array const & rhs);

		Array	&operator= (const Array & rhs);
		int		size(void) const{ return (this->_size); }

		~Array(void);

		T		* array;
	private :
		int		_size;
};

template <typename T>
std::ostream & operator<<(std::ostream & o, const Array<T> & array);

// ....Impémentations.... //

template<typename T>
Array<T>::Array(void) : _size(0), array(NULL)
{
	std::cout << "Array constructor" << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	std::cout << "Array params constructor" << std::endl;
	//this->array = new []; 
}

template<Typename T>
Array<T>::Array(Array const & rhs)
{
	this->_size = rhs.size();
	this->array = rhs.array;	
}

//template<typename T>
Array	&Array<T>::operator=(const Array & rhs)
{
	std::cout << "Array params constructor" << std::endl;
	this->_size = rhs.size();
	this->array = rhs.array;
	return (*this);
}

#endif