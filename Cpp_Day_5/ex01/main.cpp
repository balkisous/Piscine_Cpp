/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 07:45:56 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/24 11:25:53 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat	bur("Martin", 42);
	Form		form;

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

	form.beSigned(bur);
	std::cout << form << std::endl;

	bur.signForm(form);
	std::cout << bur << std::endl;
	return (0);
}