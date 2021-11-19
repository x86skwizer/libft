#include <stdlib.h>
#include <stdio.h>

char    *ft_strchr(const char *str, int c);
// size_t ft_strlen(const char *str);

int ft_atoi(const char *str)
{
    char	*src;
	size_t	len;
	int num;
	int	signe;

	src = (char *) str;
	signe = 1;
	num = 0;
	if (!src)
		return (num);
	len = 0;
	// while (src[len] == ' ' || src[len] == '\n' || src[len] == '\f' || src[len] == '\r' || src[len] == '\t' || src[len] == '\v')
	while (ft_strchr(" \n\f\r\t\v", src[len]))
		len++;
	if (src[len] == '-')
	{
		signe = -1;
		len++;
	}
	else if (src[len] == '+')
		len++;
	while (src[len] >= '0' && src[len] <= '9')
	{
		num = num * 10 + (src[len] - 48);
		len++;
	}
	return (num * signe);
}

int	main()
{
	char len[] = "       3";
	printf("atoi :    |%d|\n", atoi(len));
	printf("ft_atoi : |%d|\n", ft_atoi(len));
	return (0);
}