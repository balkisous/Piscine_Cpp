/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:07:52 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/07 11:53:25 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main (void)
{
	Karen minikaren;
	minikaren.complain("DEBUG");

	std::cout << "--------" << std::endl;

	minikaren.complain("ERROR");

	std::cout << "--------" << std::endl;

	minikaren.complain("bchjdsbd");
	
	std::cout << "--------" << std::endl;
	
	minikaren.complain("");

	std::cout << "--------" << std::endl;
	
	minikaren.complain("INFO");
	
	std::cout << "--------" << std::endl;
	
	return (0);
}