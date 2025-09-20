/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-18 19:37:57 by yartym            #+#    #+#             */
/*   Updated: 2025-09-18 19:37:57 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int result;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (result);
	while (nb > 1)
		result *= nb--;
	return (result);
}

#include <stdio.h>

int main(void)
{
	int nb = 5;
	printf("%d\n", ft_iterative_factorial(nb));
}
