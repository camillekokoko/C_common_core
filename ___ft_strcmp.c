#include <unistd.h>
#include <string.h>
#include <stdio.h>
int ft_strcmp(const char *s1, const char *s2)
{
    int i;
    i = 0;

    while (s1[i] == s2[i] && s1[i]) // && *s2)
        i++;
    return (s1[i] - s2[i]);
}

int main(int argc, char **argv)
{
	argc = argc + 0;
	printf("%d\n", ft_strcmp(argv[1], argv[2]));
	printf("%d\n", strcmp(argv[1], argv[2]));	
return (0);
}