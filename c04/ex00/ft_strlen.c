// Header

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(*str++)
		i++;
	return (i);
}

/* #include <stdio.h>
int main(void)
{
	char *str = "Hello";
	printf("%i\n", ft_strlen(str));
}
*/
