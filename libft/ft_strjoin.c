/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:55:17 by szko              #+#    #+#             */
/*   Updated: 2023/07/22 13:15:48 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	result_len;
	char	*result;
	size_t	copied_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	result_len = s1_len + s2_len;
	result = (char *)malloc((result_len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	copied_len = ft_strlcpy(result, s1, s1_len + 1);
	ft_strlcpy(result + copied_len, s2, result_len + 1 - copied_len);
	return (result);
}
/*
int main() {
    char s1[] = "Hello, ";
    char s2[] = "world!";
    char *result = ft_strjoin(s1, s2);
    if (result == NULL) {
        printf("Memory allocation failed.\n");
        return (1);
    }
    printf("Concatenated string: %s\n", result);
    free(result);
    return (0);}*/
