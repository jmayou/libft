/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 15:21:04 by jmayou            #+#    #+#             */
/*   Updated: 2023/12/29 17:46:42 by jmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = ft_strlen(dst);
	if (dsize <= i || dsize == 0)
		return (dsize + ft_strlen(src));
	while (src[j] && j < dsize - i - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
//#include <stdio.h>
//int	main(void)
//{
//	char dest[10] = "hello";
//  printf("-->%zu\n", ft_strlcat(dest, "jamila", 9));
//	printf("-->%s\n", dest);
//	return (0);
//}
