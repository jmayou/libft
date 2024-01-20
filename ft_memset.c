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
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}
//#include <stdio.h>
//#include <string.h>
// int main()
//{
//  char buffer[]= "jamila";
//  int c = 'v';
//	int buffer[] = {5000012, 15, 44, 2};
//	int i = 0;
// ft_memset(buffer, c , 5*sizeof(char));
// ft_memset(buffer+3, 0b11111111 , 3 *sizeof(char));
// while ( i < 4)
// {
//	printf ("%s\n", buffer);
// 	i++;
// }
//  return (0);
//}
