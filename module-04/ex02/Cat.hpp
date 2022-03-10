/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:14:58 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 17:14:58 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
	Brain*	mBrain;
public:
	Cat( void );
	~Cat( void );
	Cat( Cat const& copy );

	Cat&			operator=( Cat const& rhs );

	Brain const&	getBrain( void ) const;

	void	makeSound( void ) const;
};
