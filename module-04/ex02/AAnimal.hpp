/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:29:02 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 15:29:02 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AAnimal {
protected:
	std::string mType;
public:
	AAnimal( void );
	AAnimal( AAnimal const& copy );
	virtual ~AAnimal( void );

	AAnimal&	operator=( AAnimal const& rhs );

	std::string const&	getType( void ) const;
	void				setType( std::string const& type );

	virtual void		makeSound( void ) const = 0;
};
