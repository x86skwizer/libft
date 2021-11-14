#include <stdio.h>
#include <string.h>

 char    *ft_strchr(const char *str, int c)
{
    char alpha;
    int num;
    char *s = (char *)str;
    alpha = (char) c;
    if (!s)
        return (0);
    num = 0;
    while (s[num] != '\0')
    {
        if (s[num] == alpha)
            return(&s[num]);
        num++;
    }
    if (c == '\0')
        return("\0");
    return (NULL);
}

int main()
{
    printf("%s\n", ft_strchr(" Yas sine     ", ' '));
    printf("%s\n",strchr(" Yas sine      ", ' '));
    return (0);
}