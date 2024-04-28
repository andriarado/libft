/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randriat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 07:21:43 by randriat          #+#    #+#             */
/*   Updated: 2024/03/02 16:20:10 by randriat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*mem;
	size_t	i;

	mem = (char *)s;
	i = 0;
	while (i < n)
	{
		mem[i] = (unsigned char) c;
		i++;
	}
	return (s);
}

/*int	main(void)
{
	char s[10];
	int c = 5;
	size_t n = 4; 
	printf("ft : %p - %p\n",ft_memset(s,c,n),memset(s,c,n));
	ft_memset(s,c,n);
	for (size_t i = 0; i < n; i++)
		printf("%c ",s[i]);
	printf("\n");
}*/
