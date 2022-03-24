/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 07:45:56 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/24 08:31:39 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat bur("Martin", 42);

	std::cout << "-----HIGH-----" << std::endl;
	std::cout << bur;
	bur.high(5);	
	std::cout << bur;
	bur.high(92);
	std::cout << bur << std::endl;
	std::cout << "-----LOW-----" << std::endl;
	bur.low(10);
	std::cout << bur;
	bur.low(180);
	std::cout << bur << std::endl;

	return (0);
}