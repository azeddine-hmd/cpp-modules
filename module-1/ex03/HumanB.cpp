/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 21:03:34 by ahamdaou          #+#    #+#             */
/*   Updated: 2021/12/19 21:03:34 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( void ) {}

HumanB:: HumanB( HumanB const& copy)
	: mWeapon(copy.getWeapon()), mName(copy.getName()) {}

HumanB::HumanB( std::string const& name ): mName(name) {}

HumanB::~HumanB( void ) {}

Weapon const&	HumanB::getWeapon( void ) const {
	return mWeapon;
}

void	HumanB::setWeapon( Weapon const& weapon ) {
	mWeapon = weapon;
}

std::string const&	HumanB::getName( void ) const {
	return mName;
}

HumanB&	HumanB::operator=( HumanB const& other ) {
	mWeapon = other.getWeapon();
	mName = other.getName();

	return *this;
}

void	HumanB::attack( void ) const {
	std::cout << mName << " attacks with his " << mWeapon << std::endl;
}
