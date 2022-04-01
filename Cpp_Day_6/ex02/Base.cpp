/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:43:38 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/04/01 16:17:52 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Base.hpp"

Base::Base(void)
{
	std::cout << "Hello, i am Base Constuctor" << std::endl;
	return ;
}

Base::~Base(void)
{
	std::cout << "Hello, i am Base Destructor" << std::endl;
	return ;
}