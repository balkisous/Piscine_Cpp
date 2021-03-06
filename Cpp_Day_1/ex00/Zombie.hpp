/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balkis <balkis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:28:48 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/02/23 22:40:53 by balkis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP


#include <string>
#include <iostream>

class Zombie{

	public:

	Zombie(std::string name);
	~Zombie(void);

	void		announce(void) const;
	std::string	get_name(void) const;

	private:
		std::string	_name;
	
};


Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

# endif