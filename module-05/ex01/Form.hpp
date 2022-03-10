/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 20:46:23 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 20:46:23 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Form {
	std::string const	mName;
	bool				mIsSigned;
	int const			mSignatureGrade;
	int const			mExecutionGrade;

	Form( void );
public:
	Form( std::string const& name, int signatureGrade, int executionGrade );
	Form( Form const& copy );
	~Form( void );
	Form&	operator=( Form const& rhs );

	std::string const&	getName( void ) const;
	bool				getIsSigned( void ) const;
	int 				getSignatureGrade( void ) const;
	int 				getExecutionGrade( void ) const;

	void				beSigned( Bureaucrat const& signatory );

	class GradeTooHighException : public std::exception {
	public:
		char const*	what( void ) const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		char const*	what( void ) const throw();
	};
};

std::ostream&	operator<<(std::ostream& out, Form const& obj);
