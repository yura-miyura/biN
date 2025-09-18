/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-17 08:50:02 by yartym            #+#    #+#             */
/*   Updated: 2025-09-17 08:50:02 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_pntchar(char c)
{
	write(1, &c, 1);
}

void	putnbr_all_int(long nb)
{
	if (nb < 0)
	{
		ft_pntchar('-');
		nb *= -1;
	}
	if (nb > 9)
		putnbr_all_int(nb / 10);
	ft_pntchar(nb % 10 + '0');
}

void	ft_putnbr(int nb)
{
	return (putnbr_all_int((long)nb));
}

/* int main(void)
{
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
} */
