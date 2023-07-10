#include <unistd.h>
#include <stdio.h>

int ft_strlen(const char *str)
{
    int i; //size_t

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main(void)
{
    char *s = "four";
    printf("%d\n", ft_strlen(s));
    return (0);
}
