/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:15:10 by ahamdaou          #+#    #+#             */
/*   Updated: 2021/12/13 18:15:10 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include "Contact.hpp"
# include "utils.hpp"

# define SUCCESS_CREATION "contact has been created successfully!"

class PhoneBook {
	Contact mContacts[8];
	int		mCount;

	bool isValidCommand(std::string const& command) const;
	void execute(std::string const& command);
	void printHeader() const;
	void add();

	void search() const;
    void printContactHeader() const;
    void printContactFromIndex(int index) const;
    void printAllContactInfo() const;
public:
	PhoneBook();
	~PhoneBook();
	Contact const& getContact(int index) const;
	void setContact(Contact const& contact);
	void loop();
};

#endif
