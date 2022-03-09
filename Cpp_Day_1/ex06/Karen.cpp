/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balkis <balkis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:07:43 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/09 10:41:41 by balkis           ###   ########.fr       */
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
	std::string	mess[4]					= {"DEBUG", "INFO", "WARNING", "ERROR"};	//-> tab string de tout les messages
	void (Karen::*ft_ptr[4]) () const	= {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error}; //-> tab pointeur de fonction membre des quatres fonctions de message
	int	i 								= 0;
	while (i < 4)
	{
		if (level == mess[i])
		{
			while (i < 4)
			{
				(this->*ft_ptr[i])();
				i++;
			}
		}
		i++;
	}
}

void	Karen::debug(void) const
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do !" << std::endl << std::endl;
	return ;
}

void	Karen::info(void) const
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger !\nIf you did, I wouldn’t be asking for more !" << std::endl << std::endl;
	return ;
}

void	Karen::warning(void) const
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
	return ;
}

void	Karen::error(void) const
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
	return ;
}
