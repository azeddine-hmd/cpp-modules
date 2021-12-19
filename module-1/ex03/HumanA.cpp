/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:11:43 by ahamdaou          #+#    #+#             */
/*   Updated: 2021/12/19 20:11:43 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( void ) {}

HumanA::HumanA( HumanA const& copy)
	: mWeapon(copy.getWeapon()), mName(copy.getName()) {}

HumanA::HumanA( Weapon const& weapon ): mWeapon(weapon) {}

HumanA::HumanA( std::string const& name, Weapon const& weapon )
	: mWeapon(weapon), mName(name) {}

HumanA::~HumanA( void ) {}

Weapon const&	HumanA::getWeapon( void ) const {
	return mWeapon;
}

void	HumanA::setWeapon( Weapon const& weapon ) {
	mWeapon = weapon;
}

std::string const&	HumanA::getName( void ) const {
	return mName;
}

void	HumanA::setName( std::string const& name ) {
	mName = name;
}

HumanA&	HumanA::operator=( HumanA const& other ) {
	mWeapon = other.getWeapon();
	mName = other.getName();

	return *this;
}

void	HumanA::attack( void ) const {
	std::cout << mName << " attacks with his " << mWeapon << std::endl;
}
