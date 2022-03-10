/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:57:05 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/09 18:57:05 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ): AForm() {
}

RobotomyRequestForm::RobotomyRequestForm( std::string const& target ): AForm(target, 72, 45) {
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const& copy ): AForm(copy.getName(), copy.getSignatureGrade(), copy.getExecutionGrade()) {
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {
}

RobotomyRequestForm&	RobotomyRequestForm::operator=( RobotomyRequestForm const& rhs ) {
	AForm::operator=(rhs);

	return *this;
}

void	RobotomyRequestForm::execute( Bureaucrat const& executer ) const {
	AForm::execute(executer);

	std::cout << "* BUZZZZZZZZZZZZZZZZ *" << std::endl;

	std::srand(std::time(nullptr));
	if ( (std::rand() % 100) > 50 ) {
		std::cout << AForm::getName() <<  " has been robotomized successfully" << std::endl;
	} else {
		std::cout << AForm::getName() << " robotomization is a failure" << std::endl;
	}
}
