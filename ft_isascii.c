//#include "libft.h"//
#include <unistd.h>
#include <stdio.h>

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
    {
        return (1);
    }
    return (0);
}

int main()
{
    int c;
    c = 80;
    printf("%d\n", ft_isascii(c));
    c = 200;
    printf("%d\n", ft_isascii(c));
    return (0);
}