#include <ctype.h>
#include <stdio.h>

int ft_isprint(char c)
{
    if (c >= 32 && c <= 127)
        return (1);
    else
        return (0);
}

int main()
{
    char str = 'a';
    printf("isprint    : |%d|\n", isprint(str));
    printf("ft_isprint : |%d|\n", ft_isprint(str));
    return (0);
}