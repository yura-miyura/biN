// header

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 && *s2 && *s1 == *s2)
	{
		n--;
		if (n > 0)
		{
			s1++;
			s2++;
		}
	}
	return (*s1 - *s2);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
	unsigned int n = 2;
	char *s1 = "heli";
	char *s2 = "helu";

	printf("%i\n", ft_strncmp(s1, s2, n));
	printf("%i\n", strncmp(s1, s2, n));
}
*/
