#include "Intern.hpp"

std::string const Intern::sFormsName[3] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon",
};

AForm *(*sFormCreators[3])(std::string const&) = {
        &Intern::newShrubberyCreationForm,
        &Intern::newRobotomyRequestForm,
        &Intern::newPresidentialPardonForm,
};

Intern::Intern() {

}

Intern::~Intern() {

}

Intern::Intern(Intern const &copy) {
    *this = copy;
}

Intern &Intern::operator=(Intern const &rhs) {

    return *this;
}

AForm *Intern::makeForm(std::string const &formName, std::string const &target) {
    for (std::size_t i = 0; i < 3; i++) {
        if ( formName == sFormsName[i]) {
            std::cout << "Intern creates " << formName << std::endl;
            return (*Intern::sFormCreators)(target);
        }
    }
    std::cout << "couldn't find form '" << formName << "'" << std::endl;
    return NULL;
}

AForm *Intern::newShrubberyCreationForm(std::string const &target) {
    return new ShrubberyCreationForm(target);
}

AForm *Intern::newRobotomyRequestForm(std::string const &target) {
    return new RobotomyRequestForm(target);
}

AForm *Intern::newPresidentialPardonForm(std::string const &target) {
    return  new PresidentialPardonForm(target);
}
