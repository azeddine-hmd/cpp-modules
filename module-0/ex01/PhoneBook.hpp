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
# include "Contact.hpp"

class PhoneBook {
	Contact mContacts[9];
	int		mCount = 0;

	bool isValidCommand(std::string const& command) const;
	void execute(std::string const& command);
	void add();
	void search() const;
public:
	Contact getContact(int index) const;
	void setContact(const Contact& contact);
	void printHeader() const;
	void loop();
};

#endif
