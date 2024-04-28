/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randriat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:08:34 by randriat          #+#    #+#             */
/*   Updated: 2024/03/02 16:15:00 by randriat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*int	main(void)
{
	int	i;

	i = 0;
	while (i < 128)
	{
		printf("%c => ft : %d | %d\n", ft_isalpha(i), isalpha(i));
		i++;
	}
	return (0);
}*/
