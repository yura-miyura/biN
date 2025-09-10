#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int index;
	index = 0;
	while (src[index] != '\0')
	{
		dest[index] =  src[index];
		index++;
	}
	dest[index] = '\0';
	return dest;
}

int	main(void)
{
	char *src = "world";
	char dest[6];
	ft_strcpy(dest, src);
	for (int i = 0; i < 8; i++)
	{
		write(1, &dest[i], 1);
	}
}
