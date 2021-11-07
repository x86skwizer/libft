#include <ctype.h>
#include <stdio.h>

int ft_isalnum(int c)
{
    unsigned char a;

    a = (unsigned char) c;
    if ((a >= 48 && a <= 57) || (a >= 65 && a <= 90) || (a >= 97 && a <= 122))
        return (1);
    else
        return (0);
    
}

int main()
{
    int str = 97;
    printf("isalnum    : |%d|\n", isalnum(str));
    printf("ft_isalnum : |%d|\n", ft_isalnum(str));
    return (0);
}