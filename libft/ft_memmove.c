/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:22:56 by szko              #+#    #+#             */
/*   Updated: 2023/07/23 11:24:00 by szko             ###   ########.fr       */
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
	if (char_dst == char_src)
		return (dst);
	if (char_dst > char_src)
	{
		i = 0;
		while (++i <= len)
			char_dst[len - i] = char_src[len - i];
	}
	else
	{
		i = 0;
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
