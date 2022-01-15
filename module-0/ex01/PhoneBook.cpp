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

PhoneBook::PhoneBook(): mCount(0) {}

PhoneBook::~PhoneBook() {}

Contact const& PhoneBook::getContact(int index) const {
	return mContacts[index];
}

void PhoneBook::setContact(Contact const& newContact) {
	mContacts[mCount % 8] = newContact;
	mCount++;
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
	return false;
}

void PhoneBook::execute(const std::string &command) {
	std::cout << std::endl;
	if (command == "EXIT") {
		std::exit(0);
	} else if (command == "ADD") {
		add();
	} else if (command == "SEARCH") {
		search();
	}
}

void PhoneBook::loop() {
	std::string command;

	printHeader();
	while (true) {
		std::cout << std::endl;
		std::cout << "Enter command: ";
		std::getline(std::cin, command);
		if (std::cin.eof())
			break;
		if (isValidCommand(command)) {
			execute(command);
		} else {
			std::cout << command << ": command not found" << std::endl;
		}
	}
}

void PhoneBook::add() {
	Contact newContact;
	std::string input;

	std::cout << "=====[Contact Information]=====" << std::endl;
	std::cout << "First Name: ";
	std::getline(std::cin, input);
	newContact.setFirstName(input);
	std::cout << "Last Name: ";
	std::getline(std::cin, input);
	newContact.setLastName(input);
	std::cout << "Nickname: ";
	std::getline(std::cin, input);
	newContact.setNickname(input);
	std::cout << "Phone Number: ";
	std::getline(std::cin, input);
	newContact.setPhoneNumber(input);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, input);
	newContact.setDarkestSecret(input);
	newContact.setIsEmpty(false);

	std::cout << std::endl;
	std::cout << newContact.getFirstName() << " "
		<< newContact.getLastName() << " ("
		<< newContact.getNickname() << ") "
		<< SUCCESS_CREATION << std::endl;

	setContact(newContact);
}

void    PhoneBook::printContactHeader() const {
	std::cout << std::setw(10) << truncate("index") << "|";
	std::cout << std::setw(10) << truncate("first name") << "|";
	std::cout << std::setw(10) << truncate("last name") << "|";
	std::cout << std::setw(10) << truncate("nickname");
	std::cout << std::endl;
}

void    PhoneBook::printContactFromIndex(int index) const {
    Contact const& contact = getContact(index);

    // print contact feilds, one on each line
    std::cout << "First Name: " << contact.getFirstName() << std::endl;
    std::cout << "Last Name: " << contact.getLastName() << std::endl;
    std::cout << "Nickname: " << contact.getNickname() << std::endl;
    std::cout << "Phone number: " << contact.getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
}

void    PhoneBook::printAllContactInfo() const {
	for (unsigned i = 0; i < sizeof(mContacts)/sizeof(Contact); i++) {
		Contact contact = mContacts[i];

		if (contact.getIsEmpty())
			continue;
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << truncate(contact.getFirstName()) << "|";
		std::cout << std::setw(10) << truncate(contact.getLastName()) << "|";
		std::cout << std::setw(10) << truncate(contact.getNickname());
		std::cout << std::endl;
	}
    std::cout << std::endl;
}

void PhoneBook::search() const {
    printContactHeader();
    printAllContactInfo();

    // obtain search index string
    std::cout << "SEARCH> index> ";
    std::string index_str;
    std::getline(std::cin, index_str);

    // convert search index to integer
    if (!is_int(index_str.c_str())) {
        std::cout << "Error: Invalid index" << std::endl;
    } else if (ft_atoi(index_str.c_str()) < 1 || ft_atoi(index_str.c_str()) > 8) {
        std::cout << "Error: Index out of range" << std::endl;
    } else if (getContact(ft_atoi(index_str.c_str()) - 1).getIsEmpty()) {
        std::cout << "Error: Contact index is empty" << std::endl;
    } else {
        int index = ft_atoi(index_str.c_str());
        printContactFromIndex(--index);
    }
}
