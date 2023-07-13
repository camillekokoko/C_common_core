#include <unistd.h>
#include <stdio.h>
#include <string.h>

void		*ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str;
    unsigned char character;
    size_t i;

    i = 0;
    str = (unsigned char *)s;
    character = (unsigned char)c;

    while (i < n)
    {
        if (str[i] == character)
            return (&str[i]);
        i++;
    }
    return (NULL);
}

int main(void)
{
    char str[] = "john.smith@microsoft.com";
    char *ft_domain = ft_memchr(str, '@', strlen(str));
    char *domain = memchr(str, '@', strlen(str));

    printf("%s\n", ft_domain);
    printf("%s\n", domain);

    return (0);
}