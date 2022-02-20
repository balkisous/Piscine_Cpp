/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.Classe.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:26:00 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/02/20 14:54:20 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASSE_HPP
# define PHONEBOOK_CLASSE_HPP

#include "Contact.Classe.hpp"


class PhoneBook{

public:

	Contact contact[8];
	PhoneBook(void);
	~PhoneBook(void);
};

# endif