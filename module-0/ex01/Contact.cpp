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
	this->mFirstName = firstName;
}

void Contact::setLastName(std::string const& lastName) {
	this->mLastName = lastName;
}

void Contact::setNickname(std::string const& nickname) {
	this->mNickname = nickname;
}

void Contact::setPhoneNumber(std::string const& phoneNumber) {
	this->mPhoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string const& darkestSecret) {
	this->mDarkestSecret = darkestSecret;
}

void Contact::setIsEmpty(bool isEmpty) {
	this->mIsEmpty = isEmpty;
}

std::string Contact::getFirstName() const {
	return this->mFirstName;
}

std::string Contact::getLastName() const {
	return this->mLastName;
}

std::string Contact::getNickname() const {
	return this->mNickname;
}

std::string Contact::getPhoneNumber() const {
	return this->mPhoneNumber;
}

std::string Contact::getDarkestSecret() const {
	return this->mDarkestSecret;
}

bool Contact::getIsEmpty() const {
	return this->mIsEmpty;
}
