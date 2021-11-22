#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(const char *str);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strchr(const char *str, int c);


char    *ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1) - 1;
	while (j >= 0 && ft_strchr(set, s1[j]))
		j--;
	return (ft_substr(s1, i, j - i));
}

int	main()
{
	char str[] = "11111111";
	printf("%s\n", ft_strtrim(str, "123"));
	return (0);
}