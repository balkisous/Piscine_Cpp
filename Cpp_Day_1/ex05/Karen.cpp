/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balkis <balkis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:07:43 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/09 10:13:27 by balkis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	return ;
}

Karen::~Karen(void)
{
	return ;
}

void	Karen::complain(std::string level)
{
	///version a ne pas faire
	/*	
	if (level == "DEBUG")
		this->debug();
	else if (level == "INFO")
		this->info();
	else if (level == "WARNING")
		this->warning();
	else if (level == "ERROR")
		this->error();
	*/

	///version a faire
	if (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR")	
		return ;	//-> secure verifie que level est au moin egale a un des messages 

	std::string	mess[4]					= {"DEBUG", "INFO", "WARNING", "ERROR"};	//-> tab string de tout les messages
	void (Karen::*ft_ptr[4]) () const	= {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error}; //-> tab pointeur de fonction membre des quatres fonctions de message
	int	i 								= 0;
	while (i < 4)
	{
		if (level == mess[i])
			(this->*ft_ptr[i])();
		i++;
	}
}

//	https://fr.wikibooks.org/wiki/Programmation_C-C%2B%2B/Pointeurs_et_références_de_fonctions
//		L-> explication des pointeurs de fonctions

//	https://isocpp.org/wiki/faq/pointers-to-members#:~:text=C%2B%2B%20introduces%20a%20new%20type,is%20undefined%20and%20probably%20disastrous
//		L-> explication de pointeurs de fonction membres

void	Karen::debug(void) const
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
	return ;
}

void	Karen::info(void) const
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
	return ;
}

void	Karen::warning(void) const
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void	Karen::error(void) const
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	return ;
}
