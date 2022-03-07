/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bben-yaa <bben-yaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 12:28:01 by bben-yaa          #+#    #+#             */
/*   Updated: 2022/03/07 11:36:21 by bben-yaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>
#include <ios>


std::string	ft_replace(std::string content, std::string s1, std::string s2)
{
	std::string		ncont;
	unsigned long	j;
	unsigned long	i;

	i = 0;
	j = 0;
	while (i < content.length())
	{
		while (j < s1.length())
		{
			if (content[i + j] == s1[j] && j == s1.length() - 1)
			{
				ncont += s2;			//on ajoute s2 a ncont
				i += s1.length() - 1;	//on met le conteur au bonne endroit
			}
			else if (content[i + j] == s1[j])
			{
				std::cout << "doesn't copy" << std::endl;
				//on passe, on a deja copie
			}
			else
			{
				std::cout << "i'm here to add" << std::endl;
				ncont += content;
				break;	//on ne copie plus
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (ncont);
}


int	main(int argc, char **argv)
{	
	
	/*

		//bmerchin
		check s1 et s2 existe
		declare fstream
		open file with	.is_open
		use getline (file, temp)
		tu met tou dans tmp et t'ajoute a chaque fois dans content
						.eof ->voir la doc
		une fois que content et remplis on cherche s1 et on remplace par s2
		on creer et on ouvre le nouveau fichier et on le remplis
	
		//malatinis
		check  blablaba
		replace name blablabla .....
		declare ifstream
		open wtih .open
		check with .fail 
		create a new file with an ofstream
		replace  

		I have to :
		//	create a new file, copy from file and if (s1) replace by s2
		//	NO std::string::replace
		//	ofstream -> write on files
		//	ifstream -> read from files
		//	fstream -> read from files and write on files 
	
	*/

	if (argc == 4)
	{
		std::string		fname = argv[1];	//->nome du fichier a ouvrir
		std::string		s1 = argv[2];		//->string 1
		std::string		s2 = argv[3];		//->string 2
		std::ifstream	file;				//->le fichier a lire
		std::fstream	nfile;				//->le nouveau fichier a creer
		std::string		content;			//->on va mettre tout ce qui a en dans le fichier file dans content
		std::string		tmp;				//->va nous servir a lire le fichier car getline s'arrete lorsqu'il 
											// trouve '\n'

		if (fname.length() == 0)
			return (std::cout << "the file didn't exist!" << std::endl, 0);
		if (s1.length() == 0)
			return (std::cout << "string1 didn't exist!" << std::endl, 0);
		if (s2.length() == 0)
			return (std::cout << "string2 didn't exist!" << std::endl, 0);
		file.open(argv[1], std::fstream::in);
		if (!file)
			return (std::cout << "Fail to open the file!" << std::endl, 0);
		while (getline(file, tmp))
		{
			content += tmp;
			if (file.eof())					//->on est arriver a la fin du fichier
				break ;
			content += '\n';
		}
		file.close();
		std::cout << "A la fin de la boucle content vaut -" << content << "-"<< std::endl;	//->a enlever
		fname += ".replace";				//->nom du nouveau fichier
		std::cout << "le name du new file est " << fname << std::endl;						//->a enlever
		
		char	namefile[fname.length() + 1];
		strcpy(namefile, fname.c_str());
		
		nfile.open(namefile, std::ios::out);				//-> in creer le nouveau fichier  ios-> allows output (write operations) to a stream.
		if (!nfile)
			return (std::cout << "Error in creating file!" << std::endl, 0);
		content = ft_replace(content, s1, s2);
		nfile << content;
		nfile.close();
	}
	else
		std::cout << "Wrong numbers of params" << std::endl;
	return (0);
}