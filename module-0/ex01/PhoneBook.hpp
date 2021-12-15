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

# include "Contact.hpp"

class PhoneBook {
private:
	Contact mContacts[9];
	int		mCount = 0;

	bool isValidCommand(std::string const& command) const;
	void add();
	void search() const;
public:
	Contact getContact(int index) const;
	void setContact(const Contact& contact);
	void executeCommand(std::string const& command);
};

#endif