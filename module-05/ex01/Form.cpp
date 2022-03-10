/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 20:46:21 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 20:46:21 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( std::string const& name, int signatureGrade, int executionGrade )
	: mName(name), mIsSigned(false), mSignatureGrade(signatureGrade), mExecutionGrade(executionGrade)
{
}
Form::Form( Form const& copy )
	: mName(copy.getName()), mSignatureGrade(copy.getSignatureGrade()), mExecutionGrade(copy.getExecutionGrade())
{
	*this = copy;
}

Form::~Form( void ) {
}

Form&	Form::operator=( Form const& rhs) {
	mIsSigned = rhs.getIsSigned();

	return *this;
}

std::string const&	Form::getName( void ) const {
	return mName;
}

bool	Form::getIsSigned( void ) const {
	return mIsSigned;
}

int Form::getSignatureGrade( void ) const {
	return mSignatureGrade;
}

int Form::getExecutionGrade( void ) const {
	return mExecutionGrade;
}

void	Form::beSigned( Bureaucrat const& signatory ) {
	if (signatory.getGrade() <= mSignatureGrade)
		mIsSigned = true;
	signatory.signForm(*this);
	if (!mIsSigned)
		throw GradeTooLowException();
}

char const*	Form::GradeTooHighException::what( void ) const throw() {
	return "Form: grade is too high";
}

char const*	Form::GradeTooLowException::what( void ) const throw() {
	return "Form: grade is too low";
}
