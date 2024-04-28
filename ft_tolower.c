/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randriat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 07:58:32 by randriat          #+#    #+#             */
/*   Updated: 2024/03/02 16:23:57 by randriat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <ctype.h>
//#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*int	main(void)
{
	int	i;

	i = 0;
	while (i < 127)
	{
		printf("%c => ft : %c | %c\n", i, ft_tolower(i), tolower(i));
		i++;
	}
}*/
