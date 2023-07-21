#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int main()
{
    char c = 'A';
    int fd = 1; // File descriptor 1 represents standard output (stdout)

    ft_putchar_fd(c, fd);

    return (0);
}
