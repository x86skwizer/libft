#include <ctype.h>
#include <stdio.h>

int ft_isdigit(char c)
{
    if (c >= 48 && c <= 57)
        return (1);
    else
        return (0);
}

int main()
{
    char str = 'p';
    printf("isdigit    : |%d|\n", isdigit(str));
    printf("ft_isdigit : |%d|\n", ft_isdigit(str));
    return (0);
}