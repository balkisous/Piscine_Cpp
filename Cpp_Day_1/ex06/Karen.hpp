/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balkis <balkis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:07:49 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/09 09:47:36 by balkis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>


class Karen
{
	typedef void(Karen::*ft_ptr)(void) const;

public:
			Karen(void);
			~Karen(void);

			void	complain(std::string level);

private:
			void	debug(void)const;
			void	info(void)const;
			void	warning(void)const;
			void	error(void)const;
};

#endif