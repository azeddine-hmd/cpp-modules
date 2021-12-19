/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 19:56:46 by ahamdaou          #+#    #+#             */
/*   Updated: 2021/12/19 19:56:46 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>

class Weapon {
	std::string mType;

public:
	Weapon( void );
	Weapon( Weapon const& copy);
	Weapon( std::string const& type );
	~Weapon( void );

	std::string const&	getType( void ) const;
	void				setType( std::string const& type);
	Weapon&				operator=( Weapon const& other );
};

std::ostream&	operator<<( std::ostream& out, Weapon const& weapon );

#endif
