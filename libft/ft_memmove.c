/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:22:56 by szko              #+#    #+#             */
/*   Updated: 2023/07/22 13:27:05 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*char_dst;
	unsigned char	*char_src;

	char_dst = ((unsigned char *)dst);
	char_src = ((unsigned char *)src);
	i = 0;
	if (dst > src)
	{
		while (i < len)
		{
			char_dst[len - 1 - i] = char_src[len - 1 - i];
			i++;
		}
	}
	else
	{
		while (i < len)
		{
			char_dst[i] = char_src[i];
			i++;
		}
	}
	return (dst);
}
/*
int main(void)
{
	char src[] = "Hello, World!";
	char dst[10];

	printf("Before memmove: %s\n", dst);
	ft_memmove(dst, src, 10);
	printf("After memmove: %s\n", dst);
	return (0);
}
*/
