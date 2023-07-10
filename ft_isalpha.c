//#include "libft.h"//
#include <unistd.h>
#include <stdio.h>

int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return (1);
    }
    return (0);
}

int main()
{
    char c;
    c = 'U';
    printf("%d\n", ft_isalpha(c));
    c = 'l';
    printf("%d\n", ft_isalpha(c));
    c='@';
    printf("%d\n", ft_isalpha(c));
    return (0);
}