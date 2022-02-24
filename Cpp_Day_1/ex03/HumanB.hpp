/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 09:02:05 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/02/24 11:37:24 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

//https://www.youtube.com/watch?v=BvR1Pgzzr38
//https://www.youtube.com/watch?v=IzoFn3dfsPA
//https://www.internalpointers.com/post/understanding-meaning-lvalues-and-rvalues-c#:~:text=In%20C%2B%2B%20an%20lvalue%20is,since%20they%20exist%20as%20variables.&text=A%20variable%20has%20a%20specific%20memory%20location%2C%20so%20its%20an%20lvalue.

//Pas encore vu les classes canoniques mais interessant car on constate que des copies ont lieux
//https://cpp.developpez.com/cours/cppavance/ 

class HumanB
{
/*
** Une classe canonique est une classe qui a :
* - 1.Un constructeur par defaut
* - 2. Un destructeur virtual 
* - 3. Un operateur d'assignation (operator=) / qui sera relativement similaire au constructeur par copie
* - 4. Un constructeur par copie 

*** - (voir notion de Deep copy vs Shallow copy) - operateur d assignation et constructor par copie devraient faire des deep copy (a verifier )
*/
public:
		HumanB(std::string name_b);
		~HumanB();

		void	attack();
		void	setWeapon(Weapon &weap);
	
private:
		std::string name;
		Weapon		*b_weapon;

};


 


#endif