/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balkis <balkis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 22:24:46 by balkis            #+#    #+#             */
/*   Updated: 2022/02/23 23:05:14 by balkis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{

public:

		Zombie(void);
		~Zombie();
		void	set_name(std::string name);
		void	announce() const;


private:

		std::string	_name;
};

Zombie*		zombieHorde( int N, std::string name );

# endif