/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:48:27 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 18:48:27 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ): AForm() {
}

PresidentialPardonForm::PresidentialPardonForm( std::string const& target ): AForm(target, 25, 5) {
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const& copy ): AForm(copy.getName(), copy.getSignatureGrade(), copy.getExecutionGrade()) {
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {
}

PresidentialPardonForm&	PresidentialPardonForm::operator=( PresidentialPardonForm const& rhs ) {
	AForm::operator=(rhs);

	return *this;
}

void	PresidentialPardonForm::execute( Bureaucrat const& executer ) const {
	AForm::execute(executer);
	std::cout << AForm::getName() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
