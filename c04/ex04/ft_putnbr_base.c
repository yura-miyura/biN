/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-17 06:59:42 by yartym            #+#    #+#             */
/*   Updated: 2025-09-17 06:59:42 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	len_base(char *base)
{
	int	i;
	int	j;
	int	length;

	j = 0;
	length = 0;
	while (base[j])
	{
		i = j + 1;
		if (base[j] == '+' || base[j] == '-')
			return (0);
		while (base[i])
			if (base[j] == base[i++])
				return (0);
		j++;
		length++;
	}
	if (length < 2)
		return (0);
	return (length);
}

void	int_min(long nbr, char *base, int length)
{
	if (nbr > length)
		int_min(nbr / length, base, length);
	write(1, &base[nbr % length], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	length;

	length = len_base(base);
	if (length < 1)
		return ;
	if (nbr == -2147483648)
		return (write(1, "-", 1), int_min((long)nbr * -1, base, length));
	if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
	}
	if (nbr >= length)
		ft_putnbr_base(nbr / length, base);
	write(1, &base[nbr % length], 1);
}

// Test me
/* int	main(void)
{
	ft_putnbr_base(-2147483648, "0123456789ABCDEF");
	write(1, "\n", 1);

	ft_putnbr_base(-42, "01");
	write(1, "\n", 1);

	ft_putnbr_base(42, "01");
	write(1, "\n", 1);

	ft_putnbr_base(42, "{/.");
	write(1, "\n", 1);
} */
