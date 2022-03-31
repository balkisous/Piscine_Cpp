/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:43:38 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/31 18:40:32 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

			///////////////////////////////////
			///			Canonical			///
			///////////////////////////////////

Convert::Convert(void)
{
	this->arg = NULL;
	// std::cout << "Hello, i am Convert Constuctor" << std::endl;
	return ;
}

Convert::Convert(char *arg) : arg(arg)
{
	// std::cout << "Hello, i am param Convert Constuctor" << std::endl;
	return ;
}

Convert::Convert(const Convert & rhs)
{
	// std::cout << "Hello, i am Convert Copy Constructor" << std::endl;
	*this = rhs;
	return ;
}

Convert &Convert::operator=(const Convert & rhs)
{
	// std::cout << "Hello, i am Convert operator assignment" << std::endl;
	this->arg = rhs.getArg();
	this->c = rhs.getChar();
	this->i = rhs.getInt();
	this->f = rhs.getFloat();
	this->d = rhs.getDouble();
	/*assigner les valeur rhs dans this*/
	return (*this);
}

Convert::~Convert(void)
{
	// std::cout << "Hello, i am Convert Destructor" << std::endl;
	return ;
}

			///////////////////////////////////
			///			Fonction			///
			///////////////////////////////////

			/*...........get.................*/

char		*Convert::getArg(void) const { return (this->arg);}
char		Convert::getChar(void) const{ return (this->c);}
int			Convert::getInt(void) const { return (this->i);}
float		Convert::getFloat(void) const { return (this->f);}
double		Convert::getDouble(void) const { return (this->d);}

bool	isdigit(char *argv)
{
	int	i = 0;
	while (argv[i])
	{
		if ( !(argv[i] >= 0 && argv[i] <= 9) && argv[i] != '.' && argv[i] != 'f' && argv[i] != '-' )
			return (false);
		i++;
	}
	return (true);
}

char	Convert::toChar(void)
{
	if (isdigit(this->arg))
	{
		
	}
	if (!isprint(this->arg[0]))
		throw Convert::Nondisplayable();
	else
		std::cout << "blabla char" << std::endl;
	//	std::cout << static_cast<char>(this->arg);
	return ('c');
}

int		Convert::toInt(void) {
	return (1);
}		// strtod return double (assez grand pour les ints)
float	Convert::toFloat(void) {
	return (1);
}	// strtof return float	(de la meme taille que les float)
double	Convert::toDouble(void) {
	return (1);
}	// strtold return long double (assez grand pour les doubles)

std::ostream & operator << (std::ostream & cout, Convert & rhs)
{
	//checker si le type est printable
	////////CHAR////////
	cout << "char: ";
	try{
		std::cout << rhs.toChar() << std::endl;}	//printf le char ici
	catch (std::exception & e){
		std::cout << e.what() << std::endl;}

	////////INT////////
	cout << "int : ";
	try{
		std::cout << rhs.toInt() << std::endl;}	//print le int ici
	catch (std::exception & e){
		std::cout << e.what() << std::endl;}

	////////FLOAT////////
	cout << "float : ";
	try{
		std::cout << rhs.toFloat() << std::endl;}	//print le float
	catch (std::exception & e){
		std::cout << e.what() << std::endl;}

	////////DOUBLE////////
	cout << "double : ";
	try{
		std::cout << rhs.toDouble() << std::endl;}	//print le float ici
	catch (std::exception & e){
		std::cout << e.what() << std::endl;}

	return (cout);
}
