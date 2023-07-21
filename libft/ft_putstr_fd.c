#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
int main()
{
    char str[] = "Hello, World!";
    int fd = 1; // File descriptor 1 represents standard output (stdout)

    ft_putstr_fd(str, fd);

    return (0);
}
