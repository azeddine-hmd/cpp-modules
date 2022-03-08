/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 23:53:53 by ahamdaou          #+#    #+#             */
/*   Updated: 2021/12/22 23:53:53 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string strToUpper(std::string const& s)
{
	int	i;
	std::string upper(s);

	i = -1;
	while (s[++i])
		upper[i] = (char)std::toupper(s[i]);
	return (s);
}

void	replace(std::string& input, std::string const& s1, std::string const& s2, std::ofstream& ofs)
{
	int index;

	while ((index = input.find(s1)) != -1) {
		std::string left = input.substr(0, index);
		std::string right = input.substr(index + s1.length(), input.length());
		ofs << left + s2;
		input = right;
	}
	ofs << input << std::endl;
}

int		main(int argc, char **argv) {

	if (argc != 4)
	{
		std::cerr << "Error: expect three argumment" << std::endl;
		return (1);
	}

	std::string filename = std::string(argv[1]);
	std::string s1 = std::string(argv[2]);
	std::string s2 = std::string(argv[3]);

	std::ifstream	ifs(argv[1]);
	if (ifs.fail()) {
		std::cerr << "Error: failed to read from '" + filename << "'" << std::endl;
		return (1);
	}

	std::ofstream	ofs(std::string(strToUpper(argv[1])) + ".replace");
	if(ofs.fail()) {
		std::cerr << "Error: failed to write into '" + filename << "'" << std::endl;
		return (1);
	}

	std::string input;
	while (std::getline(ifs, input)) {
		replace(input, s1, s2, ofs);
	}

	return 0;
}
