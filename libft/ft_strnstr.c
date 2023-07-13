#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int		i;
	int		j;
	int		k;
	char	*str;

	str = (char *)haystack;
	i = 0;
	if (needle[i] == '\0')
		return (str);
	while (str[i] && i < (int)len)
	{
		k = i;
		j = 0;
		while (str[k] == needle[j] && k < (int)len)
		{
			if (needle[j + 1] == '\0')
				return (&str[i]);
			k++;
			j++;
		}
		i++;
	}
	return (0);

}

int main(void)
{
    char haystack[] = "This is the way.";
    char needle[] = "the";
    char *ft_the = ft_strnstr(haystack, needle, 20);
    char *the = ft_strnstr(haystack, needle, 20);

    printf("%s\n", ft_the);
    printf("%s\n", the);

    return (0);
}