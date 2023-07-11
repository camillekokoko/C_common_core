#include <unistd.h>
#include <stdio.h>
#include <string.h>


char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    // if (s[i] == '\0')
    //     return (NULL);
    while (s[i] != '\0')
    {
        if (s[i] == (char)c)
        {
            return ((char *)(s + i));
        }
        i++;
    }
    return (NULL);
    return (0);
}

int main(void)
{
    char tweet[] = "This is my @mention";
    char *mention_ft = ft_strchr(tweet, '@');
    char *mention_ft_NULL = ft_strchr(tweet, '.');

    char *mention = strchr(tweet, '@');
    char *mention_NULL = strchr(tweet, '.');

    printf("%s\n", mention_ft);
    if (mention_ft_NULL == NULL)
        printf("Not found\n");

    printf("%s\n", mention);
    if (mention_NULL == NULL)
        printf("Not found\n");
    return (0);
}