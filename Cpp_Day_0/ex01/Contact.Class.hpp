
#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP



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
