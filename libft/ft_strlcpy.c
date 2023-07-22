/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 10:59:32 by szko              #+#    #+#             */
/*   Updated: 2023/07/22 15:39:23 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}
/*
int main()
{
    char src[] = "Hello, World!";
    char ft_dst[20];
    char dst[20];

    size_t ft_result = ft_strlcpy(ft_dst, src, sizeof(ft_dst));
    size_t result = strlcpy(dst, src, sizeof(dst));

    printf("Copied string: %s\n", ft_dst);
    printf("Length of copied string: %zu\n", ft_result);

     printf("Copied string: %s\n", dst);
    printf("Length of copied string: %zu\n", result);

    return (0);
}*/