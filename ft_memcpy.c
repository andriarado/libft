/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randriat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 09:06:08 by randriat          #+#    #+#             */
/*   Updated: 2024/03/01 08:11:41 by randriat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_d;
	unsigned char	*tmp_s;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	tmp_d = (unsigned char *)dest;
	tmp_s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		tmp_d[i] = tmp_s[i];
		i++;
	}
	return (dest);
}

/*int main(void)
{
	char	s[] = "hello";
	size_t	n = ft_strlen(s);
	char	*copy1 = (char *)malloc(sizeof(char) * n);
	char	*copy2 = (char *)malloc(sizeof(char) * n);
	ft_memcpy(copy1,s,n);
	memcpy(copy2,s,n);
	printf("ft_memcpy : %s\n",copy1);
	printf("memcpy : %s\n", copy2);
	free(copy1);
	free(copy2);
	
}*/
