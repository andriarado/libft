/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randriat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 11:32:12 by randriat          #+#    #+#             */
/*   Updated: 2024/02/28 09:46:51 by randriat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;

	tmp_s1 = (unsigned char *)s1;
	tmp_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (tmp_s1[i] == tmp_s2[i])
			i++;
		else
			return (tmp_s1[i] - tmp_s2[i]);
	}
	return (0);
}

/*int	main(void)
{
	int	a[] = {1,2,3};
	int b[] = {1,2,3};
	size_t n = 5;
	printf("ft_memcmp : %d\n",ft_memcmp(a,b,n));	
	printf("memcmp : %d\n",memcmp(a,b,n));
}*/
