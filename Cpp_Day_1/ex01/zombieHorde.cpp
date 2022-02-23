/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balkis <balkis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 22:24:49 by balkis            #+#    #+#             */
/*   Updated: 2022/02/23 23:06:30 by balkis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name )
{
	int	i;

	i = 0;
	Zombie	*Horde = new Zombie[N];
	while(i < N)
	{
		Horde[i].set_name(name);
		std::cout << "Zombie number " << i << " ";
		Horde[i].announce();
		i++;
	}
	return (Horde);
}