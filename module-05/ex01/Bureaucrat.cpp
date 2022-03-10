/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 20:46:11 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 20:46:11 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat( void ) {}

Bureaucrat::Bureaucrat( std::string const& name, int grade ): mName(name), mGrade(grade) {
	if (mGrade < 1)
		throw GradeTooHighException();
	else if (mGrade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat( Bureaucrat const& copy ): mName(copy.getName()) {
	*this = copy;
}

Bureaucrat::~Bureaucrat( void ) {
}

Bureaucrat&		Bureaucrat::operator=( Bureaucrat const& rhs ) {
	mGrade = rhs.getGrade();

	return *this;
}

std::string const&	Bureaucrat::getName( void ) const {
	return mName;
}

int					Bureaucrat::getGrade( void ) const {
	return mGrade;
}

void				Bureaucrat::setGrade( int grade ) {
	mGrade = grade;
}

std::ostream&	operator<<( std::ostream& out, Bureaucrat const& obj ) {
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";

	return out;
}

void	Bureaucrat::incGrade( void ) {
	if (mGrade - 1 < 1)
		throw GradeTooHighException();
	mGrade--;
}

void	Bureaucrat::decGrade( void ) {
	if (mGrade + 1 > 150)
		throw GradeTooLowException();
	mGrade++;
}

char const*	Bureaucrat::GradeTooHighException::what() const throw() {
	return "Bureaucrat::GradeTooHighException: grade is too high";
}

char const*	Bureaucrat::GradeTooLowException::what() const throw() {
	return "Bureaucrat::GradeTooLowException: grade is too low";
}

void	Bureaucrat::signForm( Form const& form ) const {
	if (form.getIsSigned()) {
		std::cout << mName << " signed " << form.getName() << std::endl;
	} else {
		std::cout << mName << " couldn't sign " << form.getName() << " because " << "he did not satisfy grade requirement." << std::endl;
	}
}
