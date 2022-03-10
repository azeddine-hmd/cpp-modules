/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:20:21 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 15:20:21 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {
public:
	Dog( void );
	~Dog( void );
	Dog( Dog const & b );

	Dog&	operator=( Dog const& rhs );

	void	makeSound( void ) const;
};
