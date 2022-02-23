/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Classe.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balkis <balkis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:25:57 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/02/22 19:36:45 by balkis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASSE_HPP
# define CONTACT_CLASSE_HPP



class Contact{

public:

	Contact(void);
	~Contact(void);

	void	add_contact(void);
	void	display_one(void);
	void	display_all(void);

private:

	std::string		_first_name;
	std::string		_last_name;
	std::string		_nickname;
	std::string		_phone_number;
	std::string		_darkest_secret;
};

# endif
