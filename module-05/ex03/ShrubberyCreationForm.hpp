/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 20:49:54 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 20:49:54 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	static std::string const trees[3];

	ShrubberyCreationForm( void );
public:
	ShrubberyCreationForm( std::string const& target );
	ShrubberyCreationForm( ShrubberyCreationForm const& copy );
	~ShrubberyCreationForm( void );
	ShrubberyCreationForm&	operator=( ShrubberyCreationForm const& rhs );

	void	execute( Bureaucrat const& executer ) const;
};

std::ostream&	operator<<( std::ostream& out, ShrubberyCreationForm const& obj );
