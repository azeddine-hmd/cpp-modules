/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamdaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:08:37 by ahamdaou          #+#    #+#             */
/*   Updated: 2021/12/16 17:08:37 by ahamdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std::string truncate(std::string const& str) {
	std::string truncated;
	if (str.length() > 10)
	{
		truncated = str.substr(0, 10);
		truncated[truncated.length() - 1] = '.';
	} else {
		truncated = str;
	}
	return truncated;
}
