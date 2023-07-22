/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:17:44 by szko              #+#    #+#             */
/*   Updated: 2023/07/22 11:03:02 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*
int main()
{
    char src[] = "Hello, World!";
    char ft_dst[20];
    char dst[20];

    ft_memcpy(ft_dst, src, strlen(src) + 1);
    memcpy(dst, src, strlen(src) + 1);

    printf("%s\n", ft_dst);
    printf("%s\n", dst);

    return (0);
}
*/
