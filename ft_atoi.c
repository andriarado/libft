/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randriat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 09:28:24 by randriat          #+#    #+#             */
/*   Updated: 2024/03/08 07:17:49 by randriat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "stdlib.h"
//#include <stdio.h>

static int	ft_isspace(int c)
{
	if (c == ' ' || c == '\n' || c == '\r' || c == '\t' || c == '\v'
		|| c == '\f')
		return (1);
	return (0);
}

int	ft_atoi(const char *s)
{
	int	sign;
	int	value;

	sign = 1;
	value = 0;
	while (ft_isspace(*s))
		s++;
	if (*s == '+' && *(s + 1) == '-')
	{
		return (0);
	}
	else if (*s == '+' && *(s + 1) != '-')
		s++;
	if (*s == '-')
	{
		sign *= -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		value = value * 10 + *s - '0';
		s++;
	}
	return (sign * value);
}

/*int	main(void)
{
	printf("ft : %d - %d\n", ft_atoi("  -+-15a5"), atoi("  -+-15a5"));
}*/
