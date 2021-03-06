/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:20:49 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/08 14:20:49 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void    Karen::debug( void ) {
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!";
    std::cout << std::endl;
}

void    Karen::info( void ) {
    std::cout << "I cannot believe adding extra bacon cost more money. You don't put enough! If you did I would not have to ask for it!";
    std::cout << std::endl;
}

void    Karen::warning( void ) {
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming here for years and you just started working here last month.";
    std::cout << std::endl;
}

void    Karen::error( void ) {
    std::cout << "This is unacceptable, I want to speak to the manager now.";
    std::cout << std::endl;
}

void    Karen::complain(std::string level) {
    std::string const levels[4] = {
        "debug",
        "info",
        "warning",
        "error"
    };
    void (Karen::*fp[4])(void) = {
        &Karen::debug,
        &Karen::info,
        &Karen::warning,
        &Karen::error,
    };
    int i;

    for (i = 0; i < 4; i++) {
        if (level == levels[i]) {
            (this->*fp[i])();
        }
    }
}
