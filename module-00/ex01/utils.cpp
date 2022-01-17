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

static int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (c);
	return (0);
}

static int	is_str_digit(std::string const& s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}

int ft_atoi(const char *str)
{
	int		i;
	int		signe;
	long	result;

	i = 0;
	signe = 1;
	result = 0;
	while (str[i] != '\0' && (str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == ' '))
		i++;
	if (str[i] == '-')
		signe = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		result = (result * 10) + (str[i] - '0');
		if ((result * signe) > 2147483647)
			return (-1);
		else if ((result * signe) < -2147483648)
			return (-1);
		i++;
	}
	return ((int)(result * signe));
}

bool	is_int(std::string const& s)
{
	if (s[0] == '-' || s[0] == '+')
	{
		if (!is_str_digit(&s[1]))
			return (false);
	}
	else
	{
		if (!is_str_digit(s))
			return (false);
	}
    if (s != "-1" && ft_atoi(s.c_str()) == -1) {
        return (false);
    }
	return (true);
}
