/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:24:26 by szko              #+#    #+#             */
/*   Updated: 2023/07/23 11:40:55 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*empty_ptr;
	size_t	substr_len;
	char	*substr;

	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		empty_ptr = (char *)malloc(1);
		empty_ptr[0] = '\0';
		return (empty_ptr);
	}
	if ((start + len) > s_len)
		substr_len = s_len - start;
	else
		substr_len = len;
	substr = (char *) malloc((substr_len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, substr_len + 1);
	substr[substr_len] = '\0';
	return (substr);
}
/*
int main() {
    char source[] = "Hello, world!";
    unsigned int start = 7;
    size_t len = 5;

    char *substring = ft_substr(source, start, len);

    printf("Source string: %s\n", source);
    printf("Extracted substring: %s\n", substring);

    free(substring); // Remember to free the dynamically allocated memory.

    return 0;
}
*/