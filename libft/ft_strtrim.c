/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:44:59 by szko              #+#    #+#             */
/*   Updated: 2023/07/22 14:30:31 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	unsigned int	is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static char	*get_outstr_start(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] && is_in_set(s1[i], set))
		i++;
	return ((char *) & s1[i]);
}

static char	*get_outstr_end(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	while (i >= 0 && is_in_set(s1[i], set))
		i--;
	return ((char *) & s1[i]);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*outstr_start;
	char			*outstr_end;
	unsigned int	outstr_size;
	char			*outstr;

	outstr_start = get_outstr_start(s1, set);
	outstr_end = get_outstr_end(s1, set);
	outstr_size = (outstr_end - outstr_start) + 2;
	if (!s1 || !set)
		return (NULL);
	if (!*s1 || outstr_end == outstr_start)
		outstr_size = 2;
	outstr = malloc(sizeof(char) * outstr_size);
	if (outstr == NULL)
		return (NULL);
	ft_strlcpy(outstr, outstr_start, outstr_size);
	return (outstr);
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
