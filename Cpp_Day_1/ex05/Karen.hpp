/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:07:49 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/02/24 16:11:08 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>

class Karen
{

public:
			Karen(void);
			~Karen();

			void	complain(std::string level);

private:

			void	debug(void);
			void	info(void);
			void	warning(void);
			void	error(void);
};

#endif