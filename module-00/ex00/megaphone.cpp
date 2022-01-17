/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:54:47 by ahamdaou          #+#    #+#             */
/*   Updated: 2021/12/13 15:54:47 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	toUpper(char c) {
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	main(int argc, char **argv) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else {
		for (int i = 1; i < argc; i++) {
			for (int j = 0; argv[i][j]; j++) {
				std::cout << toUpper(argv[i][j]);
			}
		}
	}
	std::cout << std:: endl;
	return 0;
}
