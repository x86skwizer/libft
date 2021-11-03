#include <ctype.h>
#include <stdio.h>

int ft_isascii(char c)
{
    if (c >= 0 && c <= 127)
        return (1);
    else
        return (0);
}

int main()
{
    char str = '}';
    printf("isascii    : |%d|\n", isascii(str));
    printf("ft_isascii : |%d|\n", ft_isascii(str));
    return (0);
}