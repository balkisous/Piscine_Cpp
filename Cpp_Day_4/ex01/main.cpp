/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:30:15 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/22 15:04:47 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	int		size = 4;
	Animal	*tab[size];
	int		i;

	i = 0;
	std::cout << "----------Constructor----------" << std::endl;
	while (i < size)
	{
		if (i >= 0 && i < (size / 2))
			tab[i] = new Dog();
		if (i >= (size / 2) && i < size)
			tab[i] = new Cat();
		std::cout << std::endl;
		i++;
	}
	
		std::cout << "----------Assignement------------------" << std::endl;
	{
		Dog a;
		Dog b;
		Dog c(a);

		b = a;

		std::cout << std::endl;

		std::cout << a.getBrain() << std::endl;
		std::cout << b.getBrain() << std::endl;
		std::cout << c.getBrain() << std::endl;

		std::cout << std::endl;

	}

		std::cout << std::endl;
	std::cout << "----------Destructor----------" << std::endl;
	i = 0;
	while (i < size)
	{
		delete tab[i];
		std::cout << std::endl;
		i++;
	}
	return (0);
}