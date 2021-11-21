#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(const char *str);
//int ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_substr(char const *s, unsigned int start, size_t len);

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t	len_set;
	unsigned int	i;
	size_t	len_s1;
	char	*str;

	len_set = ft_strlen(set);
	len_s1 = ft_strlen(s1);
	i = 0;
	while (s1[i] == set[i] && i < len_set)
		i++;
	while (s1[len_s1] == set[len_set])
	{
		len_s1--;
		len_set--;
	}
	str = (char *) malloc((len_s1 - i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str = ft_substr(s1, i, len_s1);
	str[len_s1 + 1] = '\0';
	return (str);
}

int	main()
{
	char str[] = "neYassinene";
	printf("%s\n", ft_strtrim(str, "ne"));
	return (0);
}