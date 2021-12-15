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
	mCount++;
}

bool PhoneBook::isValidCommand(std::string const& command) const {
	if (!command.compare("EXIT"))
		return true;
	else if (!command.compare("ADD"))
		return true;
	else if (!command.compare("SEARCH"))
		return true;
	else
		return false;
}

void PhoneBook::executeCommand(const std::string &command) {
	if (!isValidCommand(command)) { return; }
	if (!command.compare("EXIT")) {
		exit(0);
	} else if (!command.compare("ADD")) {
		add();
	} else if (!command.compare("SEATCH")) {
		search();
	} else {
		std::cout << "executeCommand: illegal state" << std::endl;
		exit(1);
	}
}

void PhoneBook::add() {
	Contact newContact;
	for (int i = 0; i < 5; i++) {
		std::string input;
		switch (i) {
			case 0:
				std::cout << "First Name: ";
				std::cin >> input;
				newContact.setFirstName(input);
				break;
			case 1:
				std::cout << "Last Name: ";
				std::cin >> input;
				newContact.setLastName(input);
				break;
			case 2:
				std::cout << "Nickname: ";
				std::cin >> input;
				newContact.setNickname(input);
				break;
			case 3:
				std::cout << "Phone Number: ";
				std::cin >> input;
				newContact.setPhoneNumber(input);
				break;
			case 4:
				std::cout << "Darkest Secret: ";
				std::cin >> input;
				newContact.setDarkestSecret(input);
				break;
			default:
				break;
		}
	}
	this->setContact(newContact);
}

void PhoneBook::search() const {
}
