//header

int	ft_strcmp(char *s1, char *s2)
{
	int difference;

	difference = 0;
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			difference = *s1 - *s2;
		s1++;
		s2++;
	}
	return (difference);
}
/* #include <string.h>
#include <stdio.h>
int main(void)
{
	char *s1 = "he";
	char *s2 = "hi";
	printf("%i\n", ft_strcmp(s1, s2));
}
*/
