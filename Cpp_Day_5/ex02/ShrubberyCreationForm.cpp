/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 07:41:50 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/28 18:57:50 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

			///////////////////////////////////
			///			Canonical			///
			///////////////////////////////////

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyForm", 145, 137)
{
	this->_Target = "noTarget";
	std::cout << "Hello, i am ShrubberyCreationForm Constuctor" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyForm", 145, 137), _Target(target)
{
	std::cout << "Hello, i am ShrubberyCreationForm Target Constuctor" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & rhs) : Form(rhs)
{
	std::cout << "Hello, i am ShrubberyCreationForm Copy Constructor" << std::endl;
	this->_Target = rhs.getTarget();
	return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm & rhs)
{
	std::cout << "Hello, i am ShrubberyCreationForm operator assignment" << std::endl;
	this->_Target = rhs.getTarget();
	/*assigner les valeur rhs dans this*/
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "Hello, i am ShrubberyCreationForm Destructor" << std::endl;
	return ;
}

			///////////////////////////////////
			///			Fonction			///
			///////////////////////////////////

std::string ShrubberyCreationForm::getTarget(void) const
{
	return (this->_Target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	try{
		this->checker_exec(executor);
	}
	catch (std::exception & e){
		std::cout << "We cannot execute because  " << e.what() << std::endl;
		return ;
	}
	std::fstream	file;				//-> le nouveau fichier a creer
	std::string		name_file = this->_Target + "_shrubbery";
	file.open(name_file.c_str(), std::ios::out);				//-> in creer le nouveau fichier  ios-> allows output (write operations) to a stream.
	std::string content = " \
                                              .				\n \
                                   .         ;				\n \
      .              .              ;%     ;;				\n \
        ,           ,                :;%  %;				\n \
         :         ;                   :;%;'     .,			\n \
,.        %;     %;            ;        %;'    ,;			\n \
  ;       ;%;  %%;        ,     %;    ;%;    ,%'			\n \
   %;       %;%;      ,  ;       %;  ;%;   ,%;'				\n \
    ;%;      %;        ;%;        % ;%;  ,%;'				\n \
     `%;.     ;%;     %;'         `;%%;.%;'					\n \
      `:;%.    ;%%. %@;        %; ;@%;%'					\n \
         `:%;.  :;bd%;          %;@%;'						\n \
           `@%:.  :;%.         ;@@%;'						\n \
             `@%.  `;@%.      ;@@%;							\n \
               `@%%. `@%%    ;@@%;							\n \
                 ;@%. :@%%  %@@%;							\n \
                   %@bd%%%bd%%:;							\n \
                     #@%%%%%:;;								\n \
                     %@@%%%::;								\n \
                     %@@@%(o);  . '							\n \
                     %@@@o%;:(.,'							\n \
                 `.. %@@@o%::;								\n \
                    `)@@@o%::;								\n \
                     %@@(o)::;								\n \
                    .%@@@@%::;								\n \
                    ;%@@@@%::;.								\n \
                   ;%@@@@%%:;;;.							\n \
               ...;%@@@@@%%:;;;;,..							\n";
	file << content;
	std::cout << "This form was executed successfuly!!" << std::endl << std::endl;
}
