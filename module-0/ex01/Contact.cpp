/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:55:24 by ahamdaou          #+#    #+#             */
/*   Updated: 2021/12/14 15:55:24 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(): mIsEmpty(true) {}

Contact::~Contact() {}

void Contact::setFirstName(std::string const& firstName) {
	mFirstName = firstName;
}

void Contact::setLastName(std::string const& lastName) {
	mLastName = lastName;
}

void Contact::setNickname(std::string const& nickname) {
	mNickname = nickname;
}

void Contact::setPhoneNumber(std::string const& phoneNumber) {
	mPhoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string const& darkestSecret) {
	mDarkestSecret = darkestSecret;
}

void Contact::setIsEmpty(bool isEmpty) {
	mIsEmpty = isEmpty;
}

std::string Contact::getFirstName() const {
	return mFirstName;
}

std::string Contact::getLastName() const {
	return mLastName;
}

std::string Contact::getNickname() const {
	return mNickname;
}

std::string Contact::getPhoneNumber() const {
	return mPhoneNumber;
}

std::string Contact::getDarkestSecret() const {
	return mDarkestSecret;
}

bool Contact::getIsEmpty() const {
	return mIsEmpty;
}
