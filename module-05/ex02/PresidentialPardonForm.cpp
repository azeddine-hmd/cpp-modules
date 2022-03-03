#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string const& target ): AForm(target, 25, 5) {
	std::cout << "PresidentialPardonForm: constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const& copy ): AForm(copy.getName(), copy.getSignatureGrade(), copy.getExecutionGrade()) {
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {
	std::cout << "PresidentialPardonForm: destructor called" << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=( PresidentialPardonForm const& rhs ) {
	AForm::operator=(rhs);

	return *this;
}

void	PresidentialPardonForm::execute( Bureaucrat const& executer ) const {
	//TODO: implement
}
