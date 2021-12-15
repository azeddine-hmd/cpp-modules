/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:02:42 by ahamdaou          #+#    #+#             */
/*   Updated: 2021/12/14 15:02:42 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact PhoneBook::getContact(int index) const {
	return this->mContacts[index];
}

void PhoneBook::setContact(Contact const& newContact) {
	this->mContacts[mCount % 9] = newContact;
	this->mCount++;
}

void PhoneBook::printHeader() const {
	std::cout << " \
\n______ _                       ______             _     \
\n| ___ \\ |                      | ___ \\           | |    \
\n| |_/ / |__   ___  _ __   ___  | |_/ / ___   ___ | | __ \
\n|  __/| '_ \\ / _ \\| '_ \\ / _ \\ | ___ \\/ _ \\ / _ \\| |/ / \
\n| |   | | | | (_) | | | |  __/ | |_/ / (_) | (_) |   <  \
\n|_|   |_| |_|\\___/|_| |_|\\___| \\____/ \\___/ \\___/|_|\\_\\ \
\n";
	std::cout << std::endl;
}

bool PhoneBook::isValidCommand(std::string const& command) const {
	if (command == "EXIT")
		return true;
	else if (command == "ADD")
		return true;
	else if (command == "SEARCH")
		return true;
	std::cout << command << ": command not found" << std::endl;
	return false;
}

void PhoneBook::execute(const std::string &command) {
	if (!isValidCommand(command)) { return; }
	if (command == "EXIT") {
		exit(0);
	} else if (command == "ADD") {
		add();
	} else if (command == "SEARCH") {
		search();
	}
}

void PhoneBook::loop() {
	std::string command;

	this->printHeader();
	while (true) {
		std::cout << std::endl;
		std::cout << "Enter command: ";
		std::getline(std::cin, command);
		this->execute(command);
	}
}

void PhoneBook::add() {
	Contact newContact;

	std::cout << std::endl;
	std::cout << "=====[Contact Information]=====" << std::endl;
	for (int i = 0; i < 5; i++) {
		std::string input;
		switch (i) {
			case 0:
				std::cout << "First Name: ";
				std::getline(std::cin, input);
				newContact.setFirstName(input);
				break;
			case 1:
				std::cout << "Last Name: ";
				std::getline(std::cin, input);
				newContact.setLastName(input);
				break;
			case 2:
				std::cout << "Nickname: ";
				std::getline(std::cin, input);
				newContact.setNickname(input);
				break;
			case 3:
				std::cout << "Phone Number: ";
				std::getline(std::cin, input);
				newContact.setPhoneNumber(input);
				break;
			case 4:
				std::cout << "Darkest Secret: ";
				std::getline(std::cin, input);
				newContact.setDarkestSecret(input);
				break;
		}

	}

	this->setContact(newContact);
}

void PhoneBook::search() const {
	std::cout << std::endl;
	//TODO: impelment
}
