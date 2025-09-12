// header

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		n--;
		s1++;
		s2++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
	unsigned int n = 6;
	char *s1 = "heli";
	char *s2 = "helu";

	printf("%i\n", ft_strncmp(s1, s2, n));
}
*/
