/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:15:03 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 17:15:03 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
	Brain*	mBrain;
public:
	Dog( void );
	~Dog( void );
	Dog( Dog const& copy );

	Dog&			operator=( Dog const& rhs );

	Brain const&	getBrain( void ) const;

	void	makeSound( void ) const;
};
