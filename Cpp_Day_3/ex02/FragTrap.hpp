/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:44:02 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/19 16:43:30 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
			// Constructor
			FragTrap();										//	canonical
			FragTrap(std::string name);

			// Function
			FragTrap(FragTrap const & rhs);					// 	canonical
			FragTrap & operator=(const FragTrap & rhs);		// 	canonical
			void	highFivesGuys(void);
			int		getHFive(void)const;
			// Destructor
			virtual ~FragTrap();							//	 canonical
	private:
		bool	_hfives;
};

std::ostream & operator << (std::ostream & cout, const FragTrap & ft);
