/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 07:41:50 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/28 18:57:45 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

			///////////////////////////////////
			///			Canonical			///
			///////////////////////////////////

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotForm", 72, 45)
{
	std::cout << "Hello, i am RobotomyRequestForm Constuctor" << std::endl;
	this->_Target = "";
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotForm", 72, 45), _Target(target)
{
	std::cout << "Hello, i am RobotomyRequestForm Target Constuctor" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & rhs) : Form(rhs)
{
	std::cout << "Hello, i am RobotomyRequestForm Copy Constructor" << std::endl;
	this->_Target = rhs.getTarget();
	return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm & rhs)
{
	std::cout << "Hello, i am RobotomyRequestForm operator assignment" << std::endl;
	this->_Target = rhs.getTarget();
	/*assigner les valeur rhs dans this*/
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "Hello, i am RobotomyRequestForm Destructor" << std::endl;
	return ;
}

			///////////////////////////////////
			///			Fonction			///
			///////////////////////////////////

std::string RobotomyRequestForm::getTarget(void) const
{
	return (this->_Target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	try{
		this->checker_exec(executor);
	}
	catch (std::exception & e){
		std::cout << "We cannot execute because  " << e.what() << std::endl;
		return ;
	}
	std::cout << "VIIIiiiip VIIIVIIIIIIIVIIIIiiip VVVVVVVIIIIVIIIIIIIIIIIiiip!!" << std::endl;
	srand(time(NULL));		//use current time as seed for random generator
    int random_number = rand();
	if (random_number % 2 == 0)
		std::cout << this->_Target << " has been robotomized successfully!!" << std::endl;
	else
		std::cout << "The operation failed!!" << std::endl;
	std::cout << "This form was executed successfuly!!" << std::endl << std::endl;
}
