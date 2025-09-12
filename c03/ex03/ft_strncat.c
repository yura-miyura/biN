// Header
#include <stdio.h>
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int index;

	index = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	while (*src && nb > 0)
	{
		dest[index] = *src;
		nb--;
		index++;
		src++;
	}
	dest[index] = '\0';
	return (dest);
}

// #include <stdio.h>
#include <string.h>
int main(void)
{
	unsigned int nb = 7;
	char dest[30] = "hello ";
	char *src = "world asfjflajsd;lf";

	printf("%s", ft_strncat(dest, src, nb));
}
