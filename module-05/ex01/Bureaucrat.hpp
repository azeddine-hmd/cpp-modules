/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 20:46:17 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 20:46:17 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Form;

class Bureaucrat {
	std::string const 	mName;
	int					mGrade;

	Bureaucrat( void );
public:
	Bureaucrat( Bureaucrat const& copy );
	Bureaucrat( std::string const& name, int grade );
	~Bureaucrat( void );

	Bureaucrat&			operator=( Bureaucrat const& rhs );

	std::string const&	getName( void ) const;
	int					getGrade( void ) const;
	void				setGrade( int grade );

	void				incGrade( void );
	void				decGrade( void );

	void				signForm( Form const& form ) const;

	class GradeTooHighException : public std::exception {
	public:
		char const*	what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		char const*	what() const throw();
	};
};

std::ostream&	operator<<( std::ostream& out, Bureaucrat const& obj );
