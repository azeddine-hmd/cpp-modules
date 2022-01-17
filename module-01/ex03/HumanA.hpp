/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 20:05:52 by ahamdaou          #+#    #+#             */
/*   Updated: 2021/12/19 20:05:52 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	Weapon*		mWeapon;
	std::string	mName;

	HumanA( void );
public:
	HumanA( Weapon& weapon );
	HumanA( std::string const& name, Weapon& weapon);
	~HumanA( void );

	void				attack( void ) const;

	Weapon const&		getWeapon( void ) const;
	void				setWeapon( Weapon& weapon );
	std::string const&	getName( void ) const;
	void				setName( std::string& name );
};

#endif
