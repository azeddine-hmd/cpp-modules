#include "Form.hpp"

Form::Form( std::string const& name, int signatureGrade, int executionGrade )
	: mName(name), mIsSigned(false), mSignatureGrade(signatureGrade), mExecutionGrade(executionGrade)
{
	std::cout << "Form: argument constructor called" << std::endl;
}
Form::Form( Form const& copy )
	: mName(copy.getName()), mSignatureGrade(copy.getSignatureGrade()), mExecutionGrade(copy.getExecutionGrade())
{
	*this = copy;
}

Form::~Form( void ) {
	std::cout << "Form: destructor called" << std::endl;
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
