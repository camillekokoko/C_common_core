/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:44:59 by szko              #+#    #+#             */
/*   Updated: 2023/07/22 15:46:55 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isinset(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*start;
	char	*end;

	if (!s1 || !set)
		return (NULL);
	start = (char *) s1;
	end = start + ft_strlen(s1);
	while (*start && ft_isinset(*start, set))
		++start;
	while (start < end && ft_isinset(*(end - 1), set))
		--end;
	str = ft_substr(start, 0, end - start);
	return (str);
}

/*
int	main()
{
	char *str = " Linux hint ";
	char *set = "nh";
	char *trimmed = ft_strtrim(str, set);
	printf("%s\n", trimmed);
    free(trimmed);tstr == NULL)
		return (NULL);
	ft_strlcpy(outstr, outstr_start, outstr_size);
	return (out
	return (0);
}
*/
