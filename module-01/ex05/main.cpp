/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:20:54 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/08 14:20:54 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"

int     main() {
    Karen karen;
    karen.complain("debug");
    karen.complain("info");
    karen.complain("warning");
    karen.complain("error");
    return 0;
}
