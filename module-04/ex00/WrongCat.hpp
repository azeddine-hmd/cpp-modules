/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:20:55 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 15:20:55 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat( void );
	~WrongCat( void );
	WrongCat( WrongCat const& copy );

	WrongCat&	operator=( WrongCat const& rhs );

	void	makeSound( void ) const;
};
