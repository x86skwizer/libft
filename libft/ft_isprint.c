#include <ctype.h>
#include <stdio.h>

int ft_isprint(int c)
{
    unsigned char a;

    a = (unsigned char)c;
    if (a >= 32 && a <= 127)
        return (1);
    else
        return (0);
}

int main()
{
    int str = ' ';
    printf("isprint    : |%d|\n", isprint(str));
    printf("ft_isprint : |%d|\n", ft_isprint(str));
    return (0);
}