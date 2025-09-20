/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-18 19:37:54 by yartym            #+#    #+#             */
/*   Updated: 2025-09-18 19:37:54 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);

	return (nb * ft_recursive_factorial(nb - 1));
}

#include <stdio.h>

int main(void)
{
	int nb = 5;
	printf("%d\n", ft_recursive_factorial(nb));
}
