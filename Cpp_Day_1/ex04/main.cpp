/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 12:28:01 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/02/24 15:48:00 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>

int	main(int argc, char **argv)
{	

	/*if (argc == 4)
	{
		char *nname = new char[strlen(argv[1]) + strlen(".replace") + 1];
		std::ofstream file;
			
		strcpy(nname,argv[1]);
		strcat(nname,".replace"); //->new file name 
		
		file.open(nname, std::ofstream::in);
			//->open the new file
		
 		file << "lorem ipsum";
			//write in my new file
	 	file.close();
		
										//create a new file, copy from file and if (s1) replace by s2
										//NO std::string::replace

										//ofstream -> write on files
										//ifstream -> read from files
										//fstream -> read from files and write on files 
		delete [] nname;
		
	}
	else
		std::cout << "Wrong param" << std::endl;
	*/

	if (argc == 4)
	{
		std::string fname = argv[1];
		std::string s1 = argv[2];
		std::string	s2 = argv[3];

			std::cout << "s1 vaut " << s1 << " et s2 vaut " << s2 << " et file name vaut " << fname << std::endl;
	if (fname.length() == 0)
		return (std::cout << "the file didn't exist!" << std::endl, 0);
	if (s1.length() == 0)
		return (std::cout << "string1 didn't exist!" << std::endl, 0);
	if (s2.length() == 0)
		return (std::cout << "string2 didn't exist!" << std::endl, 0);






	}
	else
		std::cout << "Wrong numbers of params" << std::endl;
	return (0);
}