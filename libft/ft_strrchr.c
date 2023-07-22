/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 10:58:00 by szko              #+#    #+#             */
/*   Updated: 2023/07/22 11:04:31 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
/*
int main(void)
{
    char tweet[] = "@This @is @my @mention";
    char *mention_ft = ft_strrchr(tweet, '@');
    char *mention_ft_NULL = ft_strrchr(tweet, '.');

    char *mention = strrchr(tweet, '@');
    char *mention_NULL = strrchr(tweet, '.');

    printf("%s\n", mention_ft);
    if (mention_ft_NULL == NULL)
        printf("Not found\n");

    printf("%s\n", mention);
    if (mention_NULL == NULL)
        printf("Not found\n");
    return (0);
}*/