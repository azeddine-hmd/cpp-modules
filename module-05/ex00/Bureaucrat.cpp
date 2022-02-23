#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) {}

Bureaucrat::Bureaucrat( std::string const& name, int grade ): mName(name), mGrade(grade) {
	std::cout << "Bureaucrat: argument constructor called" << std::endl;
	//TODO: throw exception for invalid grade
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
	out << "name: " << obj.getName() << std::endl;
	out << "grade: "<< obj.getGrade() << std::endl;

	return out;
}
