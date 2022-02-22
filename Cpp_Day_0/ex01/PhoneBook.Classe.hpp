/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.Classe.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balkis <balkis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:26:00 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/02/22 18:45:39 by balkis           ###   ########.fr       */
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

	void	start_phone(void);
	void	search(int num_contact);
};

# endif