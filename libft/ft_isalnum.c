/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:03:42 by szko              #+#    #+#             */
/*   Updated: 2023/07/22 13:24:55 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int main()
{
    char c;
    c = '7';
    printf("%d\n", ft_isalnum(c));
    c = 'U';
    printf("%d\n", ft_isalnum(c));
    c = 'l';
    printf("%d\n", ft_isalnum(c));
    c = '@';
    printf("%d\n", ft_isalnum(c));
    return (0);
}
*/
