/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:26:00 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/02/23 12:09:40 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "Contact.Class.hpp"


class PhoneBook{

public:

	Contact contact[8];
	PhoneBook(void);
	~PhoneBook(void);

	void	start_phone(void);
	void	search(int num_contact);
};

# endif
