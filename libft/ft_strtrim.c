/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 12:24:56 by szko              #+#    #+#             */
/*   Updated: 2023/07/23 12:24:56 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*output;

	i = 0;
	while (s1[i] && is_in(s1[i], set))
		i++;
	j = 0;
	while (s1[j])
		j++;
	j = j - 1;
	while ((j >= 0) && s1[j] && is_in(s1[j], set))
		j--;
	if (i > j)
		output = (char *)malloc(sizeof(char));
	else
		output = (char *)malloc(sizeof(char) * (j - i + 2));
	if (!output)
		return (NULL);
	k = 0;
	while (s1[i] && (i <= j))
		output[k++] = s1[i++];
	output[k] = '\0';
	return (output);
}
