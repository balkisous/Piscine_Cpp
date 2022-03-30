/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:43:38 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/30 20:09:31 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

			///////////////////////////////////
			///			Canonical			///
			///////////////////////////////////

Convert::Convert(void)
{
	std::cout << "Hello, i am Convert Constuctor" << std::endl;
	return ;
}

Convert::Convert(const Convert & rhs)
{
	std::cout << "Hello, i am Convert Copy Constructor" << std::endl;
	*this = rhs;
	return ;
}

Convert &Convert::operator=(const Convert & rhs)
{
	std::cout << "Hello, i am Convert operator assignment" << std::endl;
	/*assigner les valeur rhs dans this*/
	return (*this);
}

Convert::~Convert(void)
{
	std::cout << "Hello, i am Convert Destructor" << std::endl;
	return ;
}

			///////////////////////////////////
			///			Fonction			///
			///////////////////////////////////

			/*...........get.................*/

char		getChar(void) const { return (this->c);}
int			getInt(void) const { return (this->i);}
float		getFloat(void) const { return (this->f);}
double		getDouble(void) const { return (this->d);}

std::ostream & operator << (std::ostream & cout, const Convert & rhs)
{
	//checker si le char est printable
	cout << "char: ";
	if (isprint(this->c) == 0)
		cout << "Non displayable" << std::endl;
	else
		cout << this->c << std::endl;
	cout << "int : ";
	cout << this->i;
	cout << "float : ";
	cout << this->f;
	cout << "double : ";
	cout << this->d;
	return (cout);
}
