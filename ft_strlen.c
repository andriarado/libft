/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randriat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 07:11:21 by randriat          #+#    #+#             */
/*   Updated: 2024/03/02 16:19:19 by randriat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
/*
int	main(void)
{
	char	s[] = "";
	char	s1[] = "a";
	char	s2[] = "abcde";
	char	s3[] = " \0";
	char	s4[] = "asdf asdf dafad\t\n\v\f\r dsf";
	printf("%s => ft : %zu | %zu\n", s, ft_strlen(s), strlen(s));
	printf("%s => ft : %zu | %zu\n", s1, ft_strlen(s1), strlen(s1));
	printf("%s => ft : %zu | %zu\n", s2, ft_strlen(s2), strlen(s2));
	printf("%s => ft : %zu | %zu\n", s3, ft_strlen(s3), strlen(s3));
	printf("%s => ft : %zu | %zu\n", s, ft_strlen(s4), strlen(s4));

	return (0);
}*/
