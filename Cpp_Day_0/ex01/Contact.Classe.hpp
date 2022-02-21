/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Classe.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balkis <balkis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:25:57 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/02/21 19:45:50 by balkis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASSE_HPP
# define CONTACT_CLASSE_HPP



class Contact{

public:


	std::string		first_name;
	std::string		name;
	std::string		last_name;
	std::string		nickname;
	std::string		phone_number;
	std::string		darkest_secret;
	Contact(void);
	~Contact(void);
	
	std::string		get_first_name(void) const;
	int				set_first_name(std::string first_name);

private:

	std::string		_first_name;
	std::string		_name;
	std::string		_last_name;
	std::string		_nickname;
	std::string		_phone_number;
	std::string		_darkest_secret;

};

# endif