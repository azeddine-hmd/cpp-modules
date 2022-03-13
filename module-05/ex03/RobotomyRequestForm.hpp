/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:57:31 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 18:57:31 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	RobotomyRequestForm( void );
public:
	RobotomyRequestForm( std::string const& target );
	RobotomyRequestForm( RobotomyRequestForm const& copy );
	~RobotomyRequestForm( void );
	RobotomyRequestForm&	operator=( RobotomyRequestForm const& rhs );

	void	execute( Bureaucrat const& executer ) const;
};

std::ostream&	operator<<( std::ostream& out, RobotomyRequestForm const& obj );
