#include <stdlib.h>
#include <stdio.h>

void *ft_memset(void *b, int c, size_t len);

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *) malloc(count * size);
	ft_memset(ptr, 0, size * count);
	return (ptr);

}

int    main()
{
    char *str;
	int len;
    len  = 5;
    str = (char *) ft_calloc(len, sizeof(char));
    int i = -1 ;
    while (++i < len)
        str[i] = 'a';
    i = -1;
    printf("Before the loop\n");
    while (++i < len)
        printf("[%d]: %c\n", i, str[i]);
    return (0);

}