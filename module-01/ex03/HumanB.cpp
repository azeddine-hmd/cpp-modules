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

HumanB::HumanB( void ): mWeapon(nullptr) {}

HumanB::HumanB( std::string const& name ): mName(name) {}

HumanB::~HumanB( void ) {}

Weapon* HumanB::getWeapon( void ) const {
	return mWeapon;
}

void	HumanB::setWeapon( Weapon& weapon ) {
	mWeapon = &weapon;
}

std::string const&	HumanB::getName( void ) const {
	return mName;
}

void	HumanB::attack( void ) const {
	std::cout << mName << " attacks with his " << *mWeapon << std::endl;
}
