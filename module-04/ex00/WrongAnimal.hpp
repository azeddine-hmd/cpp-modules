/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:20:33 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 15:20:33 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal {
protected:
	std::string	mType;
public:
	WrongAnimal( void );
	virtual ~WrongAnimal( void );
	WrongAnimal( WrongAnimal const& copy );

	WrongAnimal&	operator=( WrongAnimal const& rhs );

	std::string const&	getType( void ) const;
	void				setType( std::string const& type );

	void			makeSound( void ) const;
};
