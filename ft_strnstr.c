/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:00:12 by jmayou            #+#    #+#             */
/*   Updated: 2023/12/31 17:48:14 by jmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	f;

	i = 0;
	j = 0;
	if ((s2[0] == '\0') || (s1 == s2))
		return ((char *)s1);
	while (s1[i] && i < n)
	{
		j = 0;
		f = i;
		while (s1[f] == s2[j] && f < n && s2[j])
		{
			f++;
			j++;
		}
		if (s2[j] == '\0')
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}

//#include <stdio.h>
//#include <string.h>
//
// int main ()
//{
//	char *str = "oh no not the empty";
//
//	printf ("%s\n", ft_strnstr(str, str, 7));
//	printf ("%s\n", strnstr(str, str, 7));
//}