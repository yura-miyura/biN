/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-12 09:51:46 by yartym            #+#    #+#             */
/*   Updated: 2025-09-12 09:51:46 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(unsigned int nb)
{
	char	number;

	if (nb >= 10)
		ft_putnbr(nb / 10);
	number = (nb % 10) + '0';
	ft_putchar(number);
}
/*
int main(void)
{
	ft_putnbr(42);
}
 */
