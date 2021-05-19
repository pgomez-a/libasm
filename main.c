#include "libasm.h"
#include <stdio.h>

int	main(void)
{
	char	hola1[] = "HOLAHOLA";
	char	hola2[] = "HOLAHOLA";
	int		count;

	printf("**** STRCMP ****\n");
	printf("hola1: %p\n", hola1);
	printf("hola2: %p\n", hola2);
	printf("count: %p\n", &count);
	printf("\n");
	printf("hola1: %s\n", hola1);
	printf("hola2: %s\n", hola2);
	printf("count: %d\n", count);
	printf("\n\n\n");
	count = ft_strcmp(hola1, hola2);
	printf("hola1: %p\n", hola1);
	printf("hola2: %p\n", hola2);
	printf("count: %p\n", &count);
	printf("\n");
	printf("hola1: %s\n", hola1);
	printf("hola2: %s\n", hola2);
	printf("count: %d\n", count);
}
