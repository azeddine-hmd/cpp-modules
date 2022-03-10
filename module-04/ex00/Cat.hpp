/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:00:47 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 15:00:47 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat( void );
	~Cat( void );
	Cat( Cat const& copy );

	Cat&	operator=( Cat const& rhs );

	void	makeSound( void ) const;
};
