/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:56:40 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 18:56:40 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	PresidentialPardonForm( void );
public:
	PresidentialPardonForm( std::string const& target );
	PresidentialPardonForm( PresidentialPardonForm const& copy );
	~PresidentialPardonForm( void );
	PresidentialPardonForm&	operator=( PresidentialPardonForm const& rhs );

	void	execute( Bureaucrat const& executer ) const;
};

std::ostream&	operator<<( std::ostream& out, PresidentialPardonForm const& obj );
