/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:44:59 by szko              #+#    #+#             */
/*   Updated: 2023/07/17 16:46:06 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*trimmed;

	start = 0;
	end = strlen(s1) - 1;
	//end = ft_strlen(s1) - 1;
	len = end - start + 1;
	if (s1 == NULL || set == NULL)
		return (NULL);
	//while (s1[start] && ft_strchr(set, s1[start] != NULL)
	while (s1[start] && strchr(set, s1[start]) != NULL)
		start++;
	//while (end > start && ft_strchr(set, s1[end] != NULL)
	while (end > start && strchr(set, s1[end]) != NULL)
		end--;
	trimmed = (char *)malloc((len + 1) * sizeof(char));
	if (trimmed == NULL)
		return (NULL);
	//ft_strlcpy(trimmed, s1 + start, len + 1);
	strlcpy(trimmed, s1 + start, len + 1);
	return (trimmed);
}
/*
int	main()
{
	char *str = " Linux hint ";
	char *set = " ";
	char *trimmed = ft_strtrim(str, set);
	printf("%s\n", trimmed);
    free(trimmed);
	return (0);
}
*/
