/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:46:11 by ahamdaou          #+#    #+#             */
/*   Updated: 2022/03/08 14:46:11 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

void printBits( int raw ) {
    int size = sizeof(int);
    int maxPow = 1<<(size * 8 - 1);

    for (int i = 0; i < size * 8; i++) {
        if (i == 1) std::cout << " ";
        if (i == 24) std::cout << ".";
        std::cout << (raw&maxPow ? 1 : 0);
        raw = raw<<1;
    }
    std::cout << std::endl;
}
