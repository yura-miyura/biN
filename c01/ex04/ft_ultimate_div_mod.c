/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-07 11:36:53 by yartym            #+#    #+#             */
/*   Updated: 2025-09-07 11:36:53 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	divider;
	int	remainder;

	divider = *a / *b;
	remainder = *a % *b;
	*a = divider;
	*b = remainder;
}
// Test my function
/* #include <stdio.h>

int main(void)
{
	int i_1 = 10;
	int i_2 = 5;

	int *a = &i_1;
	int *b = &i_2;

	printf("Before: %i, %i\n", *a, *b);
	ft_ultimate_div_mod(a, b);
	printf("After: %i, %i\n", *a, *b);
}*/
