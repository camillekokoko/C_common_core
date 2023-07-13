#include <unistd.h>
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
    //dst_len = ft_strlen(dst);
    //dst_len = ft_strlen(dst);

	dst_len = strlen(dst);
	src_len = strlen(src);
	if (!size)
		return (src_len);
	while (src[i] && dst_len + i < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	if (dst_len > size)
		return (src_len + size);
	return (src_len + dst_len);
}

int main()
{
    char src[] = "Hello, World!";
    char ft_dst[20];
    char dst[20];

    size_t ft_result = ft_strlcat(ft_dst, src, sizeof(ft_dst));
    size_t result = strlcat(dst, src, sizeof(dst));


    printf("Copied string: %s\n", ft_dst);
    printf("Length of copied string: %zu\n", ft_result);


    printf("Copied string: %s\n", dst);
    printf("Length of copied string: %zu\n", result);

    return (0);
}