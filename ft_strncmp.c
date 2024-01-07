/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:49:08 by jmayou            #+#    #+#             */
/*   Updated: 2023/12/29 13:54:55 by jmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && i < n - 1
		&& (unsigned char)s1[i] == (unsigned char)s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
//#include <stdio.h>
//#include <string.h>
// int main ()
//{
//
//	printf ("%d\n",ft_strncmp("abcdefgh", "abcdwxyz", 4));
//	printf ("%d\n",strncmp("abcdefgh", "abcdwxyz", 4));
//	printf ("%d\n",ft_strncmp("\200", "\0", 1));
//	printf ("%d\n",strncmp("\200", "\0", 1));
//}
