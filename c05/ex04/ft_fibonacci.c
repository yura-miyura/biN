/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-18 19:37:47 by yartym            #+#    #+#             */
/*   Updated: 2025-09-18 19:37:47 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	if (index == 1)
		return (1);
	else if (index == 0)
		return (0);
	else if (index < 0)
		return (-1);

	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_fibonacci(8));
}
