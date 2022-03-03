#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string const& target ): AForm(target, 72, 45) {
	std::cout << "RobotomyRequestForm: constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const& copy ): AForm(copy.getName(), copy.getSignatureGrade(), copy.getExecutionGrade()) {
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {
	std::cout << "RobotomyRequestForm: destructor called" << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=( RobotomyRequestForm const& rhs ) {
	AForm::operator=(rhs);

	return *this;
}

void	RobotomyRequestForm::execute( Bureaucrat const& executer ) const {
	//TODO: implement
}
