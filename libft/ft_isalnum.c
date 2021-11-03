#include <ctype.h>
#include <stdio.h>

int ft_isalnum(char c)
{
    if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return (1);
    else
        return (0);
    
}

int main()
{
    char str = '?';
    printf("isalnum    : |%d|\n", isalnum(str));
    printf("ft_isalnum : |%d|\n", ft_isalnum(str));
    return (0);
}