/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 17:51:57 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/04/05 09:29:41 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK
# define MUTANT_STACK

#include <iostream>
#include <stack>

// https://stackoverflow.com/questions/525365/does-stdstack-expose-iterators
// explique comment utliser l'objet present dans la classe template de stack

//#template <typename T>
template<typename T>
class	MutantStack : public std::stack<T>
{
	public:
	//Constructor
	MutantStack(){}

	//Constructor copy
	MutantStack(MutantStack<T> const & rhs){this->c = rhs.c;}
		// c est une objet protected dans le container stack qui permet d'acceder a deque
		// et donc aux iterator de deque


	//Assignement Function
	MutantStack<T> & operator=(const MutantStack<T> & rhs){this->c = rhs.c;}
	
	//Destructor
		~MutantStack(){}

	typedef typename std::stack<T>::container_type:: iterator iterator;
	iterator	begin() { return this->c.begin(); }
	iterator	end() { return this->c.end(); }
};


# endif
