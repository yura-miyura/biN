/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-07 09:09:42 by yartym            #+#    #+#             */
/*   Updated: 2025-09-07 09:09:42 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	buffer_a;

	buffer_a = *a;
	*a = *b;
	*b = buffer_a;
}

// How to make and exeption
/* #include <stdio.h>
void main(void)
{
	int ia = -1;
	int ib = 1;

	int *a = &ia;
	int *b = &ib;

	printf("before a: %i, b: %i\n", *a, *b);
	ft_swap(a, b);
	printf("after a: %i, b: %i\n", *a, *b);
} */
