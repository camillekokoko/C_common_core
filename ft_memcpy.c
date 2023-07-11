#include <unistd.h>
#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned int  i;
    char    *d;
    char    *s;

    i = 0;
    d = (char *)dst;
    s = (char *)src;
    
    while (i < n)
    {
            d[i] = s[i];
            i++;
    }
    return (dst);
}

int main(void)
{
    char src[] = "Hello, World!";
    char dst[15];

    ft_memcpy(dst, src, sizeof(src));

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dst);

    return (0);
}