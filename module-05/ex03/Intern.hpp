#pragma once

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
    static const std::string sFormsName[3];
    static AForm *(*sFormCreators[3])(std::string const &);
public:
    Intern();

    ~Intern();

    Intern(Intern const &copy);

    Intern& operator=(Intern const &rhs);

    static AForm *newShrubberyCreationForm(std::string const &target);

    static AForm *newRobotomyRequestForm(std::string const &target);

    static AForm *newPresidentialPardonForm(std::string const &target);

    AForm *makeForm(std::string const &formName, std::string const &target);
};
