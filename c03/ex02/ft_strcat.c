// Header
#include <stdio.h>
char *ft_strcat(char *dest, char *src)
{
	int index;

	index = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	while (*src)
	{
		dest[index] = *src;
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
	char dest[6] = "hello ";
	char *src = "world";

	printf("%s", ft_strcat(dest, src));
}
