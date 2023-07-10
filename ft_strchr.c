#include <unistd.h>
#include <stdio.h>
#include <string.h>


char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    if (s[i] == '\0')
    {
        return (NULL);
    }
    while (s[i] != '\0')
    {
        if (s[i] == (char)c)
        {
            return ((char *)(s + i));
        }
        i++;
    }
    return (0);
}

int main(void)
{
    char tweet[] = "This is my @mention";
    char *mention_ft = ft_strchr(tweet, '@');
    char *mention = strchr(tweet, '@');
    printf("%s\n", mention_ft);
    printf("%s\n", mention);
    return (0);
}