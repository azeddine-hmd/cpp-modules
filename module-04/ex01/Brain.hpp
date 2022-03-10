/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:26:45 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 15:26:45 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain {
	std::string mIdeas[100];
public:
	Brain( void );
	virtual ~Brain( void );
	Brain( Brain const& copy );

	Brain&				operator=( Brain const& rhs );

	std::string const*	getIdeas( void ) const;
};
