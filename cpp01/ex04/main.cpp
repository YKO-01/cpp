/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 21:40:50 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/08/08 13:12:12 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>

int main(int ac, char **av)
{
	std::string line;
	std::string s1;
	std::string s2;
	std::string content;
	std::ofstream outfile;
	std::string filename;
	size_t pos;

	if (ac != 4)
		std::cout << "error :\n ./replace [filename] [string] [string]" << std::endl;
	else
	{
		std::ifstream infile;
		infile.open(av[1]);
		if (!infile.is_open())
		{
        	std::cerr << "Error opening infile: " << av[1] << std::endl;
        	return 1;
		}
		else
		{
			s1 = av[2];
			s2 = av[3];
			std::getline(infile, content);
			while (std::getline(infile, line))
			{
				content += '\n';
				content += line;
			}
			while (1)
			{
				if (s1 == "" || s2 == "")
					break;
				pos = content.find(s1);
				if (pos != std::string::npos)
				{
					content.erase(pos, s1.length());
					content.insert(pos, s2);
				}
				else
					break;
			}
			filename = av[1];
			outfile.open(filename + ".replace");
			if (!infile.is_open())
			{
				std::cerr << "Error opening outfile: " << filename + ".replace" << std::endl;
				return 1;
			}
			outfile << content;
			outfile.close();
		}
		infile.close();
	}
	return (0);
}
