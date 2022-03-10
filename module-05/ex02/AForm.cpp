/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:46:19 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 18:46:19 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm( void )
	: mName(""), mIsSigned(false), mSignatureGrade(-1), mExecutionGrade(-1)
{
}

AForm::AForm( std::string const& name, int signatureGrade, int executionGrade )
	: mName(name), mIsSigned(false), mSignatureGrade(signatureGrade), mExecutionGrade(executionGrade)
{
}

AForm::AForm( AForm const& copy )
	: mName(copy.getName()), mSignatureGrade(copy.getSignatureGrade()), mExecutionGrade(copy.getExecutionGrade())
{
	*this = copy;
}

AForm::~AForm( void ) {
}

AForm&	AForm::operator=( AForm const& rhs) {
	mIsSigned = rhs.getIsSigned();

	return *this;
}

std::string const&	AForm::getName( void ) const {
	return mName;
}

bool	AForm::getIsSigned( void ) const {
	return mIsSigned;
}

int AForm::getSignatureGrade( void ) const {
	return mSignatureGrade;
}

int AForm::getExecutionGrade( void ) const {
	return mExecutionGrade;
}

void	AForm::beSigned( Bureaucrat const& signatory ) {
	if (signatory.getGrade() <= mSignatureGrade)
		mIsSigned = true;

	signatory.signForm(*this);

	if (!mIsSigned)
		throw GradeTooLowException();
}

void	AForm::execute( Bureaucrat const& executer ) const {
	if (!getIsSigned()) {
		throw AForm::UnsignedFormException();
	} else if ( getSignatureGrade() < executer.getGrade() ) {
		throw AForm::GradeTooLowException();
	}
}


char const*	AForm::GradeTooHighException::what( void ) const throw() {
	return "Form: grade is too high";
}

char const*	AForm::GradeTooLowException::what( void ) const throw() {
	return "Form: grade is too low";
}

char const*	AForm::UnsignedFormException::what( void ) const throw() {
	return "Form: unsgined form cannot be executed";
}
