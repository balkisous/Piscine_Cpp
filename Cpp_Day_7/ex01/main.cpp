/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 13:13:37 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/04/02 15:00:26 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"
/*
int main(void)
{
	int tab[3] = {4, 5, 6};
	
	iter(tab, 3, my_function);
	return (0);
}*/

class Awesome
{
public:
  Awesome(void): _n(42) {return;}
  int get(void) const { return this->_n;}
private:
    int _n;
};

std::ostream &operator<<(std::ostream &o, Awesome const &rhs)
{
  o << rhs.get();
  return o;
}

template<typename T>
void print(T const &x)
{
  std::cout << x << std::endl;
  return ;
}

int main(void)
{
  int tab[] = {0, 1, 2, 3, 4};
  Awesome tab2[5];

  iter(tab, 5, print);
  iter(tab2, 5, print);
  return (0);
}