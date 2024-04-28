/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randriat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 06:23:20 by randriat          #+#    #+#             */
/*   Updated: 2024/03/05 06:47:15 by randriat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	else if ((size_t)start >= ft_strlen(s))
		len = 0;
	else if (len >= ft_strlen(s))
		len = ft_strlen(s) - start;
	else if (len + start > ft_strlen(s))
		len = ft_strlen(&s[start]);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
	printf("%s\n",ft_substr("hola",2,30));
}*/
