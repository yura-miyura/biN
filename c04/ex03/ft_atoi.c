// Header
#include <stdio.h>
int	ft_atoi(char *str)
{
	int start;
	int i;
	int is_neg;
	int result;

	i = 0;
	result = 0;
	start = 0;
	is_neg = 1;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13)
			||(str[i] >= '0' && str[i] <= '9') || str[i] == ' '
			|| str[i] == '+' || str[i] == '-' ))
	{
		if (str[i] == '+' && result == 0)
		{
			if (start == 0)
				start = 1;
		}
		else if (str[i] == '-' && result == 0)
		{
			if (start == 0)
				start = 1;
			is_neg *= -1;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			result = (result * 10) + (str[i] - '0');
		else if (start == 1 || (result > 0 && !(str[i] >= '0' && str[i] <= '9')))
			break;
		i++;
	}
	return (result * is_neg);
}

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char *str = "+-123";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
}
