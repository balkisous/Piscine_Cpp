/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balkis <balkis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 07:45:56 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/30 12:23:25 by balkis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern someRandomIntern;
	Form* rrf;

	rrf = someRandomIntern.makeForm("PomPom", "Bender");
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	delete rrf;
/*	Bureaucrat					bur("Martin", 20);
	std::cout << std::endl;
	ShrubberyCreationForm		shru("My Target");
	std::cout << std::endl;
	PresidentialPardonForm		pers("Employer");
	std::cout << std::endl;
	RobotomyRequestForm			bot("My bot");
	std::cout << std::endl;

	std::cout << "==================SHRUBBERY==================\n";

	bur.executeForm(shru);
	std::cout << shru << std::endl << std::endl;

	std::cout << "-------Be sign-------" << std::endl;
	try{	
		shru.beSigned(bur);
	}
	catch (std::exception & e){
		std::cout << std::endl;
		std::cout << shru.getnameform() << " cannot sign because " << e.what() << std::endl;
	}
	bur.executeForm(shru);
	std::cout << shru << std::endl << std::endl;

	std::cout << "==================PRESIDENT==================\n";
	bur.executeForm(pers);
	std::cout << pers << std::endl << std::endl;
	std::cout << "-------Be sign-------" << std::endl;
	try{	
		pers.beSigned(bur);
	}
	catch (std::exception & e){
		std::cout << std::endl;
		std::cout << pers.getnameform() << " cannot sign because " << e.what() << std::endl;
	}
	bur.executeForm(pers);
	std::cout << pers << std::endl << std::endl;

	std::cout << "==================ROBOT==================\n";

	bur.executeForm(bot);
	std::cout << bot << std::endl << std::endl;
	std::cout << "-------Be sign-------" << std::endl;
	try{	
		bot.beSigned(bur);
	}
	catch (std::exception & e){
		std::cout << std::endl;
		std::cout << bot.getnameform() << " cannot sign because " << e.what() << std::endl;
	}
	bur.executeForm(bot);
	std::cout << bot << std::endl << std::endl;
*/

	return (0);
}