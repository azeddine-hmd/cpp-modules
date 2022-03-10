/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:27:00 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 15:27:00 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	Brain*	mBrain;
public:
	Cat( void );
	~Cat( void );
	Cat( Cat const& copy );

	Cat&			operator=( Cat const& rhs );

	Brain const&	getBrain( void ) const;

	void			makeSound( void ) const;
};
