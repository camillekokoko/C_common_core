/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:01:54 by szko              #+#    #+#             */
/*   Updated: 2023/07/22 11:02:29 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
/*
int main()
{
    char c;
    c = 'U';
    printf("%d\n", ft_isalpha(c));
    c = 'l';
    printf("%d\n", ft_isalpha(c));
    c='@';
    printf("%d\n", ft_isalpha(c));
    return (0);
}
*/
