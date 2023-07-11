//#include "libft.h"
#include <unistd.h>
#include <stdio.h>
int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
    {
        return (1);
    }
    return (0);
}

int main()
{
    int c;
    c = 32;
    printf("%d\n", ft_isprint(c));
    c = 200;
    printf("%d\n", ft_isprint(c));
    return (0);
}