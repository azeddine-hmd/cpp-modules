/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 20:00:07 by ahamdaou          #+#    #+#             */
/*   Updated: 2021/12/18 20:00:07 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {}

Zombie::Zombie( std::string const& name )  {
	mName = name;
}

Zombie::~Zombie( void ) {
	std::cout << "Destructing: " << "Zombie(name='" << mName << "')";
	std::cout << std::endl;
}

void	Zombie::setName( std::string const& name ) {
	mName = name;
}

std::string	Zombie::getName( void ) {
	return mName;
}

void	Zombie::announce( void ) {
	std::cout << mName << " BraiiiiiiinnnzzzZ..." << std::endl;
}

//-- static functions

Zombie*	zombieHorde( int N, std::string name ) {
	Zombie* zombieHorde = new Zombie[N];

	for (int i = 0; i < N; i++) {
		zombieHorde[N].setName(name);
	}

	return zombieHorde;
}
