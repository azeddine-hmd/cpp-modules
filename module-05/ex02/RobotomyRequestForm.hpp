#pragma once

#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	RobotomyRequestForm( void );
public:
	RobotomyRequestForm( std::string const& target );
	RobotomyRequestForm( RobotomyRequestForm const& copy );
	~RobotomyRequestForm( void );
	RobotomyRequestForm&	operator=( RobotomyRequestForm const& rhs );

	void	execute( Bureaucrat const& executer ) const;
};

std::ostream&	operator<<( std::ostream& out, RobotomyRequestForm const& obj );
