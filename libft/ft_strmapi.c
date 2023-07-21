#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	t;
	unsigned int	len;

	t = 0;
	len = 0;
	while (s[len] != '\0')
		len++;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == 0)
		return (NULL);
	while (t < len)
	{
		str[t] = f(t, s[t]);
		t++;
	}
	str[t] = '\0';
	return (str);
}

char increment_char(unsigned int index, char c)
{
    return (c + 1);
}

int main()
{
    char input_str[] = "Hello, World!";
    char *result_str = ft_strmapi(input_str, &increment_char);

    if (result_str == NULL)
    {
        printf("Memory allocation failed.\n");
        return (1);
    }

    printf("Original String: %s\n", input_str);
    printf("Modified String: %s\n", result_str);

    free(result_str);

    return (0);
}

