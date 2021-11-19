#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(const char *str);

char    *ft_strdup(const char *src)
{
	char	*ptr;
	unsigned int	num;

	num = 0;
	ptr = (char *) malloc((ft_strlen(src) + 1) * sizeof(char));
	while (src[num] != '\0')
	{
		ptr[num] = src[num];
		num++;
	}
	ptr[num] = '\0';
	return (ptr);
}

int	main()
{
	char *str = "yassine";
	char *str1;
	str1 = ft_strdup(str);
	printf("%s\n", str1);
	return 0;
}