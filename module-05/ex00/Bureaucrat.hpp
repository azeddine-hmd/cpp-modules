#pragma once

#include <iostream>

class Bureaucrat {
	std::string const 	mName;
	int					mGrade;

	Bureaucrat( void );
public:
	Bureaucrat( Bureaucrat const& copy );
	Bureaucrat( std::string const& name, int grade );
	~Bureaucrat( void );

	Bureaucrat&			operator=( Bureaucrat const& rhs );

	std::string const&	getName( void ) const;
	int					getGrade( void ) const;
	void				setGrade( int grade );

	void				incGrade( void );
	void				decGrade( void );

	class GradeTooHighException : public std::exception {
	public:
		virtual char const*	what() const throw() {
			return "GradeTooHighException: grade is too high";
		}
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual char const*	what() const throw() {
			return "GradeTooLowException: grade is too low";
		}
	};

};

std::ostream&	operator<<( std::ostream& out, Bureaucrat const& obj );
