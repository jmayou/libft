/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmayou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:57:31 by jmayou            #+#    #+#             */
/*   Updated: 2024/01/01 17:05:41 by jmayou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((char *)b)[i] = c;
		i++;
	}
	return (b);
}
//
//#include <stdio.h>
//#include <string.h>
//
// int main()
//{
//    char buffer[6] = "jamila";
//    int c = 'v';
//
//       ft_memset(buffer, c , 3); // kol bit ki3mrb c
//		printf ("%s\n", buffer);
//       return (0);
//}
