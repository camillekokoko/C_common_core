//#include "libft.h"//
#include <unistd.h>
#include <stdio.h>

int ft_isalnum(int c)
{
    if ((c >= '0' && c <= '9') ||  ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
    {
        return (1);
    }
    return (0);
}

int main()
{
    char c;
    c = '7';
    printf("%d\n", ft_isalnum(c));
    c = 'U';
    printf("%d\n", ft_isalnum(c));
    c = 'l';
    printf("%d\n", ft_isalnum(c));
    c = '@';
    printf("%d\n", ft_isalnum(c));
    return (0);
}