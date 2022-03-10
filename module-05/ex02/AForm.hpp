/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:46:28 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 18:46:28 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class AForm {
	std::string const	mName;
	bool				mIsSigned;
	int const			mSignatureGrade;
	int const			mExecutionGrade;

protected:
	AForm( void );

public:
	AForm( std::string const& name, int signatureGrade, int executionGrade );
	AForm( AForm const& copy );
	virtual ~AForm( void );
	AForm&	operator=( AForm const& rhs );

	std::string const&	getName( void ) const;
	bool				getIsSigned( void ) const;
	int 				getSignatureGrade( void ) const;
	int 				getExecutionGrade( void ) const;

	void				beSigned( Bureaucrat const& signatory );
	virtual void		execute( Bureaucrat const& executer ) const = 0;

	class GradeTooHighException : public std::exception {
	public:
		char const*	what( void ) const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		char const*	what( void ) const throw();
	};

	class UnsignedFormException : public std::exception {
		char const*	what( void ) const throw();
	};
};

std::ostream&	operator<<(std::ostream& out, AForm const& obj);
