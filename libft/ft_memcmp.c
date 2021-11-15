#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t len;
	char *str1;
	char *str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	if (!str1 || !str2)
		return (0);
	len = 0;
	while (len < n) {
		if (str1[len] == str2[len])
			len++;
		else if (str1[len] - str2[len] > 0)
			return 1;
		else
			return -1;
	}
	return 0;
}

int	main()
{
	printf("%d\n", memcmp("xb", "abcd", 2));
	printf("%d\n", ft_memcmp("xb", "abcd", 2));
	return (0);
}