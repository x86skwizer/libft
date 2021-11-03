#include <stdio.h>
#include <ctype.h>

int ft_isalpha(char c)
{
    if ((c <= 65 && c >= 90) || (c <= 97 && c >= 122))
        return(1);
    else
        return(0);
}

int main()
{
    char str = 'a';
    printf("isalpha    : |%d|\n", isalpha(str));
    printf("ft_isalpha : |%d|\n", ft_isalpha(str));
    return (0);

}