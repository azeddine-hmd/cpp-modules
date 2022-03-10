/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:21:03 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 15:21:03 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal {
public:
	WrongDog( void );
	~WrongDog( void );
	WrongDog( WrongDog const & b );

	WrongDog&	operator=( WrongDog const& rhs );

	void	makeSound( void ) const;
};
