/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 10:45:41 by szko              #+#    #+#             */
/*   Updated: 2023/07/22 13:59:38 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	find;
	int		i;

	find = (unsigned char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == find)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == find)
		return ((char *)s + i);
	return (0);
}
/*
int main(void)
{
    char tweet[] = "This is my @mention";
    char *mention_ft = ft_strchr(tweet, '@');
    char *mention_ft_NULL = ft_strchr(tweet, '.');

    char *mention = strchr(tweet, '@');
    char *mention_NULL = strchr(tweet, '.');

    printf("%s\n", mention_ft);
    if (mention_ft_NULL == NULL)
        printf("Not found\n");

    printf("%s\n", mention);
    if (mention_NULL == NULL)
        printf("Not found\n");
    return (0);
}*/