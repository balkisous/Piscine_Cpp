/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:50:19 by balkis            #+#    #+#             */
/*   Updated: 2022/03/15 12:59:43 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{

	//toFloat() arrondi pas assez ---> a fix
	
	Fixed a;
	Fixed const b(1.1111f);
	Fixed const c(2.2222f);
	Fixed const d(3);

	a = b;

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;



	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "----------------BIG TEST MAIN----------------" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	

	std::cout << "b + b + c = " << b + b + c << "    (expecting: 4.44)" << std::endl;
	std::cout << "b - c = " << b - c << "    (expecting: -1.11)" << std::endl;
	std::cout << "c * d = " << c * d << "    (expecting: 6.66)" << std::endl;
	std::cout << "d / c = " << d / c << "    (expecting: 1.35)" << std::endl;
	std::cout << std::endl;

	//std::cout << "b > c : " << (int)(b > c) << "    (expecting: 0)" << std::endl;
	//std::cout << "b < c : " << (int)(b < c) << "    (expecting: 1)" << std::endl;
	//std::cout << "b <= c : " << (int)(b <= c) << "    (expecting: 1)" << std::endl;
	//std::cout << "b >= c : " << (int)(b >= c) << "    (expecting: 0)" << std::endl;
	std::cout << "a == b : " << (int)(a == b) << "    (expecting: 1)" << std::endl;
	std::cout << "a == c : " << (int)(a == c) << "    (expecting: 0)" << std::endl;
	std::cout << "a != b : " << (int)(a != b) << "    (expecting: 0)" << std::endl;
	std::cout << "a != c : " << (int)(a != c) << "    (expecting: 1)" << std::endl;
	std::cout << std::endl;


	std::cout << "a = " << a << "    (expecting: 1.109)" << std::endl;
	std::cout << "a++ = " << a++ << "    (expecting: 1.109)" << std::endl;
	std::cout << "a = " << a << "    (expecting: 1.113)" << std::endl;
	std::cout << "++a = " << ++a << "    (expecting: 1.117)" << std::endl;
	std::cout << "a = " << a << "    (expecting: 1.117)" << std::endl;
	std::cout << std::endl;
	
	std::cout << "a = " << a << "    (expecting: 1.117)" << std::endl;
	std::cout << "a-- = " << a-- << "    (expecting: 1.117)" << std::endl;
	std::cout << "a = " << a << "    (expecting: 1.113)" << std::endl;
	std::cout << "--a = " << --a << "    (expecting: 1.109)" << std::endl;
	std::cout << "a = " << a << "    (expecting: 1.109)" << std::endl;
	std::cout << std::endl;

	std::cout << "a = " << a << std::endl;
	std::cout << "d = " << d << std::endl;
	//std::cout << "member   min(a, d) = " << Fixed::min(a, d) << "  (expecting: 1.109)" << std::endl;
	//std::cout << "member   max(a, d) = " << Fixed::max(a, d) << "        (expecting: 3)" << std::endl;

	return (0);
}