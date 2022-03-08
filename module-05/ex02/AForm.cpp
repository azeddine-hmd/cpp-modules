#include "AForm.hpp"

AForm::AForm( std::string const& name, int signatureGrade, int executionGrade )
	: mName(name), mIsSigned(false), mSignatureGrade(signatureGrade), mExecutionGrade(executionGrade)
{
	std::cout << "AForm: argument constructor called" << std::endl;
}

AForm::AForm( AForm const& copy )
	: mName(copy.getName()), mSignatureGrade(copy.getSignatureGrade()), mExecutionGrade(copy.getExecutionGrade())
{
	*this = copy;
}

AForm::~AForm( void ) {
	std::cout << "AForm: destructor called" << std::endl;
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
