#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned int i;
    unsigned char *dest;
    unsigned char *sorc;
    
    dest = (unsigned char *) dst;
    sorc = (unsigned char *) src;

    i = 0;
    if (sorc && i < n)
    {
        while (sorc[i] != '\0' && i < n)
        {
            dest[i] = sorc[i];
            i++;
        }
    }

    return (dest);
}

int	main()
{
	unsigned char dest[20];
	unsigned char dest1[20];
	unsigned char src[20];

	memcpy(dest, src, 4);
	ft_memcpy(dest1, src, 4);
	printf("memcpy    : |%s|\n", dest);
	printf("ft_memcpy : |%s|\n", dest1);
	return 0;

}