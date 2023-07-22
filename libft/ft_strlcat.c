/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 10:59:27 by szko              #+#    #+#             */
/*   Updated: 2023/07/22 13:32:30 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	if (size < i)
	{
		while (src[j])
			j++;
		return (size + j);
	}
	while (size > 0 && i < size - 1 && src[j])
		dst[i++] = src[j++];
	dst[i] = '\0';
	while (src[j++])
		i++;
	return (i);
}
/*
int main()
{
    char src[] = "Hello, World!";
    char ft_dst[20];
    char dst[20];

    size_t ft_result = ft_strlcat(ft_dst, src, sizeof(ft_dst));
    size_t result = strlcat(dst, src, sizeof(dst));


    printf("Copied string: %s\n", ft_dst);
    printf("Length of copied string: %zu\n", ft_result);


    printf("Copied string: %s\n", dst);
    printf("Length of copied string: %zu\n", result);

    return (0);
}*/