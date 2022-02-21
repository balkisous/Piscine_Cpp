/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.Classe.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:26:00 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/02/21 12:35:32 by bben-yaa         ###   ########.fr       */
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

void	add_contact(char cmd[120]);
void	add_first_name(char cmd[120]);
void	add_name(char cmd[120]);

private:
	int	num_conct;
};

# endif