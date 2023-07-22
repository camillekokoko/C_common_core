/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szko <szko@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 09:53:35 by szko              #+#    #+#             */
/*   Updated: 2023/07/22 13:11:51 by szko             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_of_char(int n)
{
	int				i;
	unsigned int	num;

	i = 1;
	num = n;
	if (n < 0)
	{
		i = 2;
		num = -n;
	}
	while (num > 9)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int				i;
	unsigned int	num;
	char			*buffer;

	buffer = (char *)malloc(num_of_char(n) + 1);
	if (buffer == NULL)
		return (0);
	i = num_of_char(n);
	num = n;
	if (n < 0)
	{
		num = -n;
		buffer[0] = '-';
	}
	buffer[i] = 0;
	buffer[i - 1] = '0';
	while (num > 0)
	{
		i--;
		buffer[i] = num % 10 + 48;
		num /= 10;
	}
	return (buffer);
}
/*
int main() {
    int number = -12345;
    char* str_number = ft_itoa(number);

    if (str_number == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Number: %d\n", number);
    printf("String: %s\n", str_number);

    free(str_number); // Don't forget to free the allocated memory

    return 0;
}
*/
