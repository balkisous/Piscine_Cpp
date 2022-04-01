/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 11:59:04 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/04/01 17:52:57 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <time.h>
#include <typeinfo>
#include "Base.hpp"

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base	*generate(void)
{
	int		n;

	// crée aleatoirement une instance A, B ou C
	// et return un * sur celle ci 
	// Base *ptr = new A, B ou C;
	// return (ptr);
	// ------> alloue une instance
	srand(time(NULL));	//Randomize seed initialization
	n = rand() % 3;
	if (n == 0)
	{
		//std::cout << "A" << std::endl;
		Base *ptr = new A;	
		return (ptr);
	}
	else if (n == 1)
	{
		//std::cout << "B" << std::endl;
		Base *ptr = new B;
		return (ptr);
	}
	else if (n == 2)
	{
		//std::cout << "C" << std::endl;
		Base *ptr = new C;	
		return (ptr);
	}
	return (NULL);
}

void	identify(Base *p)
{
	// Affiche le type de l'objet pointé par p 
	// On utilise le dynamic_cast
	// Il s'exeute lors du run time
	// Et donc echoue lors de l'execution et non lors de la compilation comme le static_cast
	// Il return NULL s'il echoue
	
	std::cout << "fonction identify pointeur" << std::endl;
	
	A	*a = dynamic_cast<A *>(p);
	B	*b = dynamic_cast<B *>(p);
	C	*c = dynamic_cast<C *>(p);

	if (a != NULL)
		std::cout << "Le type de l'objet est A" << std::endl << std::endl;
	else if (b != NULL)
		std::cout << "Le type de l'objet est B" << std::endl << std::endl;
	else if (c != NULL)
		std::cout << "Le type de l'objet est C" << std::endl << std::endl;
}
 
void	identify(Base &p)
{
	//affiche le véritable type de l'objet pointé par p (no pointeur here, only referance accepted)
	std::cout << "fonction identify reference" << std::endl;
	
	/*....A....*/
	try {
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "Le type de l'objet est A" << std::endl << std::endl;
	}
	catch(std::bad_cast &bc){
	}
	
	/*....B....*/
	try {
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "Le type de l'objet est B" << std::endl << std::endl;		
	}
	catch(std::bad_cast &bc){
	}
	
	/*....C....*/
	try{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "Le type de l'objet est C" << std::endl << std::endl;
	}
	catch(std::bad_cast &bc){
	}
}


int main (void)
{
	Base *ptr = generate();
	identify(ptr);

	Base &ref = *ptr;
	identify(ref);

	delete ptr;

	return (0);
}