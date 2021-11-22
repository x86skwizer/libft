#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(const char *str);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_substr(char const *s, unsigned int start, size_t len);


char    *ft_strtrim(char const *s1, char const *set)
{
    size_t	len_set;
	unsigned int	i;
	size_t	len_s1;
	char	*str;
	char	*str_len;

	len_set = ft_strlen(set);
	len_s1 = ft_strlen(s1);
	i = 0;
	str = (char *) malloc((len_s1 + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str = ft_substr(s1, i, len_s1);
	if (ft_strncmp(s1, set, len_set - 1) == 0)
		str = ft_substr(str, len_set, len_s1);
	str_len = (char *) malloc((len_set + 1) * sizeof(char));
	if (!str_len)
		return (NULL);
	str_len = ft_substr(str, len_s1 - len_set, len_set);
	if (ft_strncmp(str_len, set, len_set - 1) == 0)
	{
		while (s1[len_s1] == set[len_set])
		{
			len_s1--;
			len_set--;
		}
		str = ft_substr(str, i, len_set);
	}
	str[len_s1 - len_set + 1] = '\0';
	return (str);
}

int	main()
{
	char str[] = "neYassinene";
	//char set[] = "ne";
	//size_t	len_set;
	printf("%s\n", ft_strtrim(str, "ne"));
	//len_set = ft_strlen(set) - 1;
	//printf("%d\n", ft_strncmp(str, set, len_set));
	return 0;
}