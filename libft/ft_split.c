/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42adel.org.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:41:56 by szko              #+#    #+#             */
/*   Updated: 2023/07/17 17:02:05 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static char	*ft_word_dup(const char *s1, int start, int finish)
{
	char	*d1;
	int	i;

	i = 0;
	d1 = malloc(sizeof(char) * (finish - start + 1));
	if (d1 == NULL)
		return (NULL);
	while (start < finish)
	{
		d1[i] = s1[start];
		start++;
		i++;
	}
	d1[i] = '\0'
	return (d1);
}

char **ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	countwords;
	size_t	i;
	size_t	ptrposl
	size_t	triml

	i = 0;
	ptrpos = 0;
	trim = 0;
	countwords = 1;
	while (s[i] != '\0')
	{
		if(s[i] == c)
			countwords++;
		i++;
	}
	i = 0;
	ptr = malloc(sizeof(car *) * countwords);
	if (ptr == NULL)
		return (NULL);
	while (i <= strlen(s))
	{
		if (s[i] == c || s[i] == '\0')
		{
			ptr[ptrpos] = ft_word_dup(s, trim, i)
			i++;
			trim = i;
			ptrpos++;
		}
		else
			i++;

	}
	return (ptr);
}

int	main()
{
	  ft_split("      split       this for   me  !", ' ');
}
