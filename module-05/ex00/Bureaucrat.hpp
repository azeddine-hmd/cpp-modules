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
};

std::ostream&	operator<<( std::ostream& out, Bureaucrat const& obj );
