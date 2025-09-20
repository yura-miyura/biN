/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-18 19:37:49 by yartym            #+#    #+#             */
/*   Updated: 2025-09-18 19:37:49 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_iterative_power(nb, power - 1));
}

#include <stdio.h>

int main(void)
{
	int nb = 0;
	int power = 0;
	printf("%d\n", ft_iterative_power(nb, power));
}
