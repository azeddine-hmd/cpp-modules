/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:03:56 by ahamdaou          #+#    #+#             */
/*   Updated: 2021/12/14 16:03:56 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact {
	std::string mFirstName;
	std::string mLastName;
	std::string mNickname;
	std::string mPhoneNumber;
	std::string mDarkestSecret;
	bool mIsEmpty;

public:
	Contact();
	~Contact();
	void setFirstName(std::string const& firstName);
	void setLastName(std::string const& lastName);
	void setNickname(std::string const& nickname);
	void setPhoneNumber(std::string const& phoneNumber);
	void setDarkestSecret(std::string const& darkestSecret);
	void setIsEmpty(bool isEmpty);
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickname() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;
	bool getIsEmpty() const;
};

#endif
