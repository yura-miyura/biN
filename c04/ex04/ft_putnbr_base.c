// Header
#include <stdio.h>
#include <unistd.h>

int	length_and_valid(char *base)
{
	int i;
	int length;

	i = 1;
	length = 0;
	while(*base)
	{
		if (*base == '+' || *base == '-')
			return (0);
		while (base[i])
			if (*base == base[i++])
				return (0);
		base++;
		length++;
	}
	if (length < 2)
		return (0);
	return (length);
}
void	ft_putnbr_base(int nbr, char *base)
{
	int length;

	length = length_and_valid(base);
	if (length > 1)
	{
		if (nbr < 0)
			write(1, "")
	}
}

// Test me
int	main(void)
{
	ft_putnbr_base(10, "01");
}
