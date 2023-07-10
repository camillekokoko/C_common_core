//#include "libft.h"
#include <unistd.h>
#include <stdio.h>

int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
        c -= 32;
		//  c = (c - 'a' + 'A');
	return (c);
}

int main(void)
{
    char c;
    c = 'c';
    printf("%c\n", ft_toupper(c));
    c = 'C';
    printf("%C\n", ft_toupper(c));
    return (0);
}
