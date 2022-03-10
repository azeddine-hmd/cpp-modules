/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 20:52:27 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/08 20:52:27 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string const& name): ClapTrap(name) {
	std::cout << "ScavTrap: argument constructor called!" << std::endl;

	mName = name;
	mHitPoint = 100;
	mEnergyPoint = 50;
	mAttackDamage = 20;
}

ScavTrap::ScavTrap( ScavTrap const& copy ) {
	*this = copy;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap: desctractor called!" << std::endl;
}

ScavTrap&	ScavTrap::operator=( ScavTrap const& rhs ) {
	ClapTrap::operator=(rhs);

	return *this;
}

void	ScavTrap::attack( std::string const& target ) {
	std::cout << "ScavTrap " << mName << " attack " << target << ", causing " << mAttackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap " << mName << " activate guard keeper mode!" << std::endl;
}
