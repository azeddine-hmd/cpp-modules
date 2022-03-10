/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:26:38 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 15:26:38 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal {
protected:
	std::string mType;
public:
	Animal( void );
	Animal( Animal const& copy );
	virtual ~Animal( void );

	Animal&	operator=( Animal const& rhs );

	std::string const&	getType( void ) const;
	void				setType( std::string const& type );

	virtual void		makeSound( void ) const;
};
