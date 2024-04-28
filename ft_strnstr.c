/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randriat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 07:22:54 by randriat          #+#    #+#             */
/*   Updated: 2024/03/01 07:35:47 by randriat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	len_s2;
	char	*s;

	i = 0;
	s = (char *)s1;
	len_s2 = ft_strlen(s2);
	if (len_s2 == 0 || s1 == s2)
		return (s);
	while (s[i] != '\0' && i < n)
	{
		j = 0;
		while (s[i + j] && s2[j] && s[i + j] == s2[j] && i + j < n)
			j++;
		if (j == len_s2)
			return (s + i);
		i++;
	}
	return (0);
}
/*int	main(void)
{
	char	s[] = "lorem ipsum dolor sit amet";
	char	d[] = "lorem";
	printf("%s\n", ft_strnstr(s,d,15));
}*/
