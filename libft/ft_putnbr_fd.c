#include "libft.h"

#include <unistd.h>


void	ft_putnbr_fd(int n, int fd)

{

	char	*s;


	if (!fd)

		return ;

	s = ft_itoa(n);

	write(fd, s, ft_strlen(s));

}

