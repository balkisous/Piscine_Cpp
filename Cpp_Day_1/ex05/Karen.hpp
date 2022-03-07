/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:07:49 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/07 13:11:18 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>


class Karen
{
	typedef void(Karen::*ft_ptr)(void);

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