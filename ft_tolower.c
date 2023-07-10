//#include "libft.h"
#include <unistd.h>
#include <stdio.h>

int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
        c += 32;
		//  c = (c + 'a' - 'A');
	return (c);
}

int main(void)
{
    char c;
    c = 'C';
    printf("%C\n", ft_tolower(c));
    c = 'c';
    printf("%c\n", ft_tolower(c));
    return (0);
}
