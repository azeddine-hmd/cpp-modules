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

public:
	// setters
	void setFirstName(std::string& firstName);
	void setLastName(std::string& lastName);
	void setNickname(std::string& nickname);
	void setPhoneNumber(std::string& phoneNumber);
	void setDarkestSecret(std::string& darkestSecret);

	// getters
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickname() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;
};

#endif
