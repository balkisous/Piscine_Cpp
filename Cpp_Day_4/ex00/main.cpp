/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:30:15 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/22 09:56:20 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	std::cout << std::endl;
	const Animal* dog = new Dog();
	std::cout << std::endl;
	const Animal* cat = new Cat();
	std::cout << std::endl;

	std::cout << meta->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;

	cat->makeSound();	//will output the cat sound!
	dog->makeSound();	//will output the dog sound!
	meta->makeSound();	//will output the meta sound!

	std::cout << std::endl;
	delete meta;
	std::cout << std::endl;
	delete dog;
	std::cout << std::endl;
	delete cat;

	std::cout << std::endl << std::endl << "--------Wrong Exemple---------" << std::endl << std::endl << std::endl;

	const WrongAnimal* wmeta = new WrongAnimal();
	std::cout << std::endl;
	const WrongAnimal* wcat = new WrongCat();
	std::cout << std::endl;

	std::cout << wmeta->getType() << " " << std::endl;
	std::cout << wcat->getType() << " " << std::endl;

	wcat->makeSound();	//will output the cat sound!
	wmeta->makeSound();	//will output the meta sound!

	std::cout << std::endl;
	delete wmeta;
	std::cout << std::endl;
	delete wcat;

	return (0);
}