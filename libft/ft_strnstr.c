#include <string.h>
#include <stdio.h>

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t len_haystack;
    size_t len_needle;
    char    *ptr;

    len_haystack = 0;
    len_needle = 0;
	ptr = NULL;
    if (!needle)
		return ((char *)haystack);
	while (haystack[len_haystack] != needle[len_needle] && len_haystack < len)
        len_haystack++;
    if (haystack[len_haystack] == needle[len_needle])
    {
    	*ptr = haystack[len_haystack];
		while (haystack[len_haystack] == needle[len_needle])
        {
            len_haystack++;
			len_needle++;
			if (needle[len_needle] == '\0')
				return (ptr);
		}
    }
	return (NULL);
}

int main()
{
    char *largestring = "Foo Bar Baz";
	char *smallstring = "Bar";

	printf("%s\n", strnstr(largestring, smallstring, 10));
	printf("%s\n", ft_strnstr(largestring, smallstring, 10));
    return (0);
}