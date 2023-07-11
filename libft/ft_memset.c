//#include "libft.h"//
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void *ft_memset(void *b, int c, size_t len)
{
    size_t   i;
    unsigned char *ptr;
    i = 0;
    ptr = (unsigned char *)b;
    if (!b)
        return (NULL);
    while (i < len)
    {
        *ptr = (unsigned char) c;
        i++;
        ptr++;
    }
    return (b);
}

int main(void)
{
    char ft_str[] = "Hello, World!";
    char str[] = "Hello, World!";

    memset(str, 'X', 5);
    printf("%s\n", str);

    ft_memset(ft_str, 'X', 5);
    printf("%s\n", ft_str);
    return (0);
}
