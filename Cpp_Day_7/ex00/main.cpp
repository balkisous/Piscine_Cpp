/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 20:17:36 by balkis            #+#    #+#             */
/*   Updated: 2022/04/02 12:38:28 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

/*
class Awesome
{
	public:
		Awesome(void): _n(0) {}
		Awesome(int n): _n(n) {}
		Awesome &operator=(Awesome &a) {_n = a._n; return *this;}
		bool operator==(Awesome const &rhs) const { return (this->_n == rhs._n);}
		bool operator!=(Awesome const &rhs) const { return (this->_n != rhs._n);}
		bool operator>(Awesome const &rhs) const { return (this->_n > rhs._n);}
		bool operator<(Awesome const &rhs) const { return (this->_n < rhs._n);}
		bool operator>=(Awesome const &rhs) const { return (this->_n >= rhs._n);}
		bool operator<=(Awesome const &rhs) const { return (this->_n <= rhs._n);}
		int get_n() const { return _n;}
	private:
		int _n;
};

std::ostream &operator<<(std::ostream &o, const Awesome &a) { o << a.get_n();return o;}

int main(void)
{
	Awesome a(2), b(4);
	std::cout << "............SWAP............" << std::endl;
	std::cout << "Before swap function a = " << a << " and b = " << b << std::endl;
	swap(a, b);
	std::cout << "		" << a << " " << b << std::endl;
	std::cout << "After swap function a = " << a << " and b = " << b << std::endl << std::endl;
	
	std::cout << "............MAX............" << std::endl;
	std::cout << "Le max entre a: 4 et b: 2 est cencé etre a le resutat est ";
	std::cout << max(a, b) << std::endl << std::endl;

	std::cout << "............MIN............" << std::endl;
	std::cout << "Le min entre a: 4 et b: 2 est cencé etre b le resutat est ";
	std::cout << min(a, b) << std::endl << std::endl;
	return (0);
}
*/

int	main(void)
{
	int a = 2;
	int b = 3;
	
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}