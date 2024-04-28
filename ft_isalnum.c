/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randriat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 06:28:16 by randriat          #+#    #+#             */
/*   Updated: 2024/03/02 16:14:20 by randriat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/*int main(void)
{
	int	i;

	i = 0;
	while (i < 128)
	{
		printf("%c => ft : %d | %d\n", i, ft_isalnum(i), isalnum(i));
		i++;
	}
	return (0);
}*/
