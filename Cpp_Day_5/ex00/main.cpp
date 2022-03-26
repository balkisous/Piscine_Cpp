/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 07:45:56 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/26 12:54:44 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat bur("Martin", 42);

	std::cout << "-----HIGH-----" << std::endl;
	std::cout << bur;
	bur.increment();
	std::cout << bur;
	bur.increment();
	std::cout << bur;
	bur.setGrade(1);
	std::cout << bur;
	bur.increment();
	std::cout << bur << std::endl;
	std::cout << "-----LOW-----" << std::endl;
	bur.decrement();
	std::cout << bur;
	bur.decrement();
	std::cout << bur;
	bur.setGrade(150);
	std::cout << bur;
	bur.decrement();
	std::cout << bur << std::endl;

	return (0);
}