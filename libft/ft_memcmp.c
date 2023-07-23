/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:17:44 by szko              #+#    #+#             */
/*   Updated: 2023/07/22 16:10:58 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	size_t			i;

	i = 0;
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
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
