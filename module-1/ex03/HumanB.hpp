/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:06:00 by ahamdaou          #+#    #+#             */
/*   Updated: 2021/12/19 20:06:00 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	Weapon mWeapon;
	std::string mName;

public:
	HumanB( void );
	HumanB( HumanB const& copy );
	HumanB( std::string const& name );
	~HumanB( void );

	void				attack( void ) const;

	Weapon const&		getWeapon( void ) const;
	void				setWeapon( Weapon const& weapon );
	std::string const &	getName( void ) const;
	void				setName( std::string const& name );
	HumanB&				operator=( HumanB const& other );
};

#endif
