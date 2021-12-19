/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 20:00:24 by ahamdaou          #+#    #+#             */
/*   Updated: 2021/12/18 20:00:24 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
	std::string mName;

public:
	Zombie( void );
	Zombie( std::string const& name );
	~Zombie( void );

	void		announce( void );

	void		setName( std::string const& name );
	std::string	getName( void );
};

Zombie*	zombieHorde( int N, std::string name );

#endif
