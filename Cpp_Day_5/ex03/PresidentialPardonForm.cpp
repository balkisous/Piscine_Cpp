/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 07:41:50 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/28 18:57:38 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

			///////////////////////////////////
			///			Canonical			///
			///////////////////////////////////

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentForm", 25, 5)
{
	std::cout << "Hello, i am PresidentialPardonForm Constuctor" << std::endl;
	this->_Target = "";
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentForm", 25, 5), _Target(target)
{
	std::cout << "Hello, i am PresidentialPardonForm Target Constuctor" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & rhs) : Form(rhs)
{
	std::cout << "Hello, i am PresidentialPardonForm Copy Constructor" << std::endl;
	this->_Target = rhs.getTarget();
	return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm & rhs)
{
	std::cout << "Hello, i am PresidentialPardonForm operator assignment" << std::endl;
	this->_Target = rhs.getTarget();
	/*assigner les valeur rhs dans this*/
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "Hello, i am PresidentialPardonForm Destructor" << std::endl;
	return ;
}

			///////////////////////////////////
			///			Fonction			///
			///////////////////////////////////
			
std::string PresidentialPardonForm::getTarget(void) const
{
	return (this->_Target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try{
		this->checker_exec(executor);
	}
	catch (std::exception & e){
		std::cout << "We cannot execute because  " << e.what() << std::endl;
		return ;
	}

	std::cout << this->_Target << " was forgiven by Zaphod Beeblebrox." << std::endl;
	std::cout << "This form was executed successfuly!!" << std::endl << std::endl;
}
