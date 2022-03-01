#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) {}

Bureaucrat::Bureaucrat( std::string const& name, int grade ): mName(name), mGrade(grade) {
	std::cout << "Bureaucrat: argument constructor called" << std::endl;
	if (mGrade < 1)
		throw GradeTooHighException();
	else if (mGrade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat( Bureaucrat const& copy ): mName(copy.getName()) {
	*this = copy;
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "Bureaucrat: deconstructor called" << std::endl;
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
