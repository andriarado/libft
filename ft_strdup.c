/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randriat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 07:03:16 by randriat          #+#    #+#             */
/*   Updated: 2024/02/27 07:55:20 by randriat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

char	*ft_strdup(const char *s)
{
	char	*temp;

	temp = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!temp)
		return (NULL);
	ft_strlcpy(temp, s, (ft_strlen(s) + 1));
	return ((void *)temp);
}

/*int	main(void)
{
	char	s[] = "Hello";
	char	*d;
	char	*d1;

	d = ft_strdup(s);
	d1 = strdup(s);
	printf("ft_strdup : %s\n", d);
	printf("strdup : %s\n", d1);
}*/
