/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:43:38 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/04/01 10:07:36 by bben-yaa         ###   ########.fr       */
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
		if (argv[i] != '.' && argv[i] != 'f' && argv[i] != '-' && isdigit(argv[i]) == 0)
			return (false);
		i++;
	}
	return (true);
}

char	Convert::toChar(void)
{
	if (isdigit(this->arg) == true)
	{
		try{
			this->c = this->toInt();
		}
		catch (std::exception & e){
			std::cout << e.what() << std::endl;
		}
		catch(std::invalid_argument & e) {
			//It reports errors that arise because an argument value has not been accepted.
			throw Convert::Impossible();
		}
		if (this->c > 127 || this->c < -128)	//check max char
			throw Convert::Impossible();
		if (isprint(this->c) == 0)				//check printable
				throw Convert::Nondisplayable();
		return (static_cast<char>(this->c));
	}
	if (this->arg[1]){
		throw Convert::Impossible();
		return (0);}
	this->c = static_cast<char>(this->arg[0]);
	if (this->c > 127 || this->c < -128)	//check max char
		throw Convert::Impossible();
	return (0);
}

int		Convert::toInt(void) {
	this->i = static_cast<int>(strtod(this->arg, NULL));
	// strtod return double (assez grand pour les ints)
	try{
		if (this->i <= -2147483648 || this->i >= 2147483647)
			throw Convert::Impossible();
		else
			return (static_cast<int>(this->i));
	}
	catch(std::invalid_argument & e) {
	//It reports errors that arise because an argument value has not been accepted.
		throw Convert::Impossible();
	}
	return (0);
}

float	Convert::toFloat(void) {
	try{
		this->f = static_cast<float>(strtof(this->arg, NULL));
		// strtof return float	(de la meme taille que les float)
		return (this->f);
	}
	catch(std::invalid_argument & e) {
		//It reports errors that arise because an argument value has not been accepted.
		throw Convert::Impossible();
	}
	return (0);
}	
double	Convert::toDouble(void) {
	try{
		this->d = static_cast<double>(strtold(this->arg, NULL));
		return (this->d);
	}
	catch(std::invalid_argument & e) {
		//It reports errors that arise because an argument value has not been accepted.
		throw Convert::Impossible();
	}
	return (0);
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
		std::cout << rhs.toFloat() << "f" << std::endl;}	//print le float
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

