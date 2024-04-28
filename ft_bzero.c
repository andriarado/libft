/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randriat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 07:44:52 by randriat          #+#    #+#             */
/*   Updated: 2024/02/24 09:38:50 by randriat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <strings.h>
//#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int	main(void)
{
	char	s[10];
	char	s1[10];

	ft_bzero(s,10);
	bzero(s1,10);
	for (int i = 0; i < 10; i++)
		printf("%c ", s[i]);
	printf("\n");
	for (int i = 0; i < 10; i++)
		printf("%c ", s1[i]);
	printf("\n");	
}*/
