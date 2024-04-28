/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randriat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 10:21:37 by randriat          #+#    #+#             */
/*   Updated: 2024/03/01 08:58:49 by randriat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp_s;
	size_t			i;
	unsigned char	tmp_c;

	i = 0;
	tmp_s = (unsigned char *)s;
	tmp_c = (unsigned char)c;
	while (i < n)
	{
		if (tmp_s[i] == tmp_c)
			return (tmp_s + i);
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char tab[] = {1,2,3,4,5};
	printf("ft_memchr : %p\n", ft_memchr(tab,8,5));
	printf("memchr :  %p\n", memchr(tab,8,5));
	printf("%p\n",ft_memchr(((void*)0), '\0', 0x20));
		
}*/
