/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:45:11 by ahamdaou          #+#    #+#             */
/*   Updated: 2021/12/13 17:45:11 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void) {
	PhoneBook phoneBook;

	std::cout << "===[welcome to PhoneBook]===" << std::endl;
	while (true) {
		std::cout << "Enter command: ";
		std::string command;
		std::cin >> command;
		phoneBook.executeCommand(command);
	}

	return 0;
}
