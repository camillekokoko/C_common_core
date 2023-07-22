/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:24:26 by szko              #+#    #+#             */
/*   Updated: 2023/07/22 11:03:15 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)b;
	if (!b)
		return (NULL);
	while (i < len)
	{
		*ptr = (unsigned char) c;
		i++;
		ptr++;
	}
	return (b);
}
/*
int main(void)
{
    char ft_str[] = "Hello, World!";
    char str[] = "Hello, World!";

    memset(str, 'X', 5);
    printf("%s\n", str);

    ft_memset(ft_str, 'X', 5);
    printf("%s\n", ft_str);
    return (0);
}
*/
