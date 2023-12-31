/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 10:49:34 by szko              #+#    #+#             */
/*   Updated: 2023/07/22 11:03:57 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
/*
void	print_char_index(unsigned int index, char *c)
{
    printf("Character at index %u: %c\n", index, *c);
}

int main()
{
    char str[] = "Hello, World!";
    ft_striteri(str, &print_char_index);

    return (0);
}
*/