/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 07:45:56 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/28 10:08:06 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat	bur("Martin", 40);
	Form		form;

	std::cout << "-----HIGH-----" << std::endl;
	std::cout << bur;
	bur.increment();	
	std::cout << bur;
	bur.increment();
	std::cout << bur << std::endl;
	std::cout << "-----LOW-----" << std::endl;
	bur.decrement();
	std::cout << bur;
	bur.decrement();
	std::cout << bur << std::endl;

	std::cout << "-------be sign-------" << std::endl;
	form.beSigned(bur);
	std::cout << form << std::endl;

	std::cout << "-------sign form-------" << std::endl;
	bur.signForm(form);
	std::cout << bur << std::endl;
	return (0);
}