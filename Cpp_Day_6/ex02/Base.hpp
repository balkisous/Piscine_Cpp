/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:42:07 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/04/01 16:26:30 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <stdexcept>
#include <iostream>

class	Base
{
	public:
			//Constructor
			Base(void);							//canonical constructeur par defaut

			//Destructeur
			virtual ~Base(void);							//canonical destructeur

	protected:

	private:

};

#endif