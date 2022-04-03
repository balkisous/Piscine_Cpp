/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balkis <balkis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:05:10 by balkis            #+#    #+#             */
/*   Updated: 2022/04/03 23:47:39 by balkis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>

class Array
{
	class	out_of_range: public std::exception	{
		public :
			virtual const char * what() const throw() {
				return("Array index is out of range\n");
			}
	};
	public :
		Array(void);				//constructor par defaut
		Array(unsigned int n);		//constructor params
		Array(Array const & rhs);	//constructor par copie

		Array	& operator= (const Array & rhs);						//operator assignement
		T		& operator[](unsigned int pos) const;					//operator crochet
		unsigned int		size(void) const{ return (this->_size); }	//getter Size

		virtual ~Array(void);		//destructor

	private :
		unsigned int		_size;
		T					* array;
};

//template <typename T>
//std::ostream & operator<<(std::ostream & o, const Array<T> & array);

// ....Impémentations.... //

template<typename T>
Array<T>::Array(void) : _size(0), array(NULL)	//Constructor sans parametre
{
	std::cout << "Array constructor" << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n), array(new T[_size])	//Constructor avec params et crée un new tab
{
	for (unsigned int i = 0; i < this->_size; i++)
		this->array[i] = T();
	std::cout << "Array params constructor" << std::endl;
}

template<typename T>
Array<T>::Array(Array const & rhs)
{
	std::cout << "Array constructor par recopie" << std::endl;
	this->_size = rhs.size();
	this->array = new T[rhs._size];
	for (unsigned int i = 0; i < rhs._size; i++)
		this->array[i] = rhs.array[i];	
}

template<typename T>
Array<T>	&Array<T>::operator=(const Array & rhs)
{
	std::cout << "Array operator assignement" << std::endl;
	if (this->_size != 0 && this->_size != rhs.size())
		delete [] this->array;
	this->_size = rhs.size();
	this->array = new T[rhs._size];
	for (unsigned int i = 0; i < rhs._size; i++)
		this->array[i] = rhs.array[i];	
	return (*this);
}

template <typename T>
T & Array<T>::operator[](unsigned int pos) const
{
	//std::cout << "Array operator crochet" << std::endl;
	if (pos >= this->_size)
		throw out_of_range();
	return (this->array[pos]);
}

template<typename T>
Array<T>::~Array(void)
{
	std::cout << "Array destructor" << std::endl;
	if (this->array)
		delete [] this->array;
}

template <typename T>
std::ostream & operator << (std::ostream & os, const Array<T> & array)
{
	os << "[";
	for (unsigned int i = 0; i < array.size(); i++)
	{
		os << array[i];
		if (i < array.size() - 1)
			os << ", ";
	}
	os << "]";
	return (os);
}

#endif