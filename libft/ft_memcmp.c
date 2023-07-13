#include <unistd.h>
#include <stdio.h>
#include <string.h>

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
    while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

int main()
{
    char src[] = "Hello, World!";
    char ft_dst[20];
    char dst[20];

    ft_memcpy(ft_dst, src, strlen(src) + 1);
    memcpy(dst, src, strlen(src) + 1);

    printf("%s\n", ft_dst);
    printf("%s\n", dst);

    return (0);
}