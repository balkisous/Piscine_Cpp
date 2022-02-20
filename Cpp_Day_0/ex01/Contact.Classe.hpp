/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Classe.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:25:57 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/02/20 15:55:16 by bben-yaa         ###   ########.fr       */
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
};

# endif