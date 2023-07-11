//#include "libft.h"//
#include <unistd.h>
#include <stdio.h>

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
    {
        return (1);
    }
    return (0);
}

int main()
{
    int c;
    c = '7';
    printf("%d\n", ft_isdigit(c));
    c = '@';
    printf("%d\n", ft_isdigit(c));
    return (0);
}