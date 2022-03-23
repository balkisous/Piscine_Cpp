/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balkis <balkis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:30:15 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/23 11:39:02 by balkis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	//const AAnimal* meta = new AAnimal();
	std::cout << std::endl;
	const AAnimal* dog = new Dog();
	std::cout << std::endl;
	const AAnimal* cat = new Cat();
	std::cout << std::endl;

	//std::cout << meta->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;

	cat->makeSound();	//will output the cat sound!
	dog->makeSound();	//will output the dog sound!
	//meta->makeSound();	//will output the meta sound!

	std::cout << std::endl;
	//delete meta;
	std::cout << std::endl;
	delete dog;
	std::cout << std::endl;
	delete cat;
	return (0);
}