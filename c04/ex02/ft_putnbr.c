// Header

#include <unistd.h>

void	ft_pntchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_pntchar('-');
		nb *= -1;
	}
	if ((unsigned int) nb > 9)
		ft_putnbr((unsigned int) nb / 10);
	ft_pntchar((unsigned int) nb % 10 + '0');
}

/* int main(void)
{
	ft_putnbr(2147483647);
	ft_putnbr(-2147483648);
} */
