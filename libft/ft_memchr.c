/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:21:18 by szko              #+#    #+#             */
/*   Updated: 2023/07/22 11:02:54 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	character;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	character = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == character)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
    char str[] = "john.smith@microsoft.com";
    char *ft_domain = ft_memchr(str, '@', strlen(str));
    char *domain = memchr(str, '@', strlen(str));

    printf("%s\n", ft_domain);
    printf("%s\n", domain);

    return (0);
}
*/
