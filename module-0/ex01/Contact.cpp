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

void Contact::setFirstName(std::string& firstName) {
	this->mFirstName = firstName;
}

void Contact::setLastName(std::string& lastName) {
	this->mLastName = lastName;
}

void Contact::setNickname(std::string& nickname) {
	this->mNickname = nickname;
}

void Contact::setPhoneNumber(std::string& phoneNumber) {
	this->mPhoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string& darkestSecret) {
	this->mDarkestSecret = darkestSecret;
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
