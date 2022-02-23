/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:28:48 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/02/23 18:34:47 by bben-yaa         ###   ########.fr       */
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

	void		announce(void);
	std::string	get_name(void) const;

	private:
		std::string	_name;
	
};


Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

# endif