/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randriat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 06:31:47 by randriat          #+#    #+#             */
/*   Updated: 2024/03/08 06:36:52 by randriat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*temp;
	size_t			value;
	size_t			i;

	if (size && nmemb && nmemb > (size_t) - 1 / size)
		return (NULL);
	value = nmemb * (size);
	temp = (unsigned char *)malloc(value);
	if (!temp)
		return (NULL);
	i = 0;
	while (i < value)
	{
		temp[i] = 0;
		i++;
	}
	return ((void *)temp);
}

/*int	main(void)
{
	char	*s;
	s = ft_calloc(5,sizeof(char));
	printf("%p\n",s);
}*/
