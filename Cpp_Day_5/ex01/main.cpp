/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 07:45:56 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/28 13:39:23 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	Bureaucrat	bur("Martin", 20);
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

	std::cout << "-------Be sign-------" << std::endl;
	try{	
		form.beSigned(bur);
	}
	catch (std::exception & e){
		std::cout << std::endl;
		std::cout << bur.getName() << " cannot sign because " << e.what() << std::endl;
	}
	std::cout << form << std::endl;


	std::cout << "-------Be sign2-------" << std::endl;
	try{
		form.beSigned(bur);
	}
	catch (std::exception & e){
		std::cout << bur.getName() << " cannot sign because " << e.what() << std::endl;
	}
	std::cout << form << std::endl;

	std::cout << "-------sign form-------" << std::endl;
		bur.signForm(form);
	std::cout << bur << std::endl;
	return (0);
}