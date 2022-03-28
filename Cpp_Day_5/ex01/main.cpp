/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 07:45:56 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/28 13:21:21 by bben-yaa         ###   ########.fr       */
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
	try{	
		form.beSigned(bur);
	}
	catch (std::exception e){
		e.what();
	}
	std::cout << form << std::endl;


	std::cout << "-------be sign2-------" << std::endl;
	try{
		form.beSigned(bur);
	}
	catch (std::exception e){
		e.what();
	}
	std::cout << form << std::endl;

	std::cout << "-------sign form-------" << std::endl;
	try{
		bur.signForm(form);
	}
	catch (std::exception e){
		e.what();
	}
	std::cout << bur << std::endl;
	return (0);
}