#include <stdio.h>
#include <stdlib.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    unsigned int    num;

    str = (char *) malloc((len + 1) * sizeof(char));
    if (!str)
        return (NULL);
    num = 0;
    while (start < start + len)
    {
        str[num] = s[start];
        num++;
        start++;
    }
    str[num] = '\0';
    return (str);
}

int main()
{
    char str[15] = "Yassine Amrire";
    printf("%s\n", ft_substr(str, 3, 5));
    return (0);
}