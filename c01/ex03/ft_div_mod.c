/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-07 09:27:58 by yartym            #+#    #+#             */
/*   Updated: 2025-09-07 09:27:58 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Stores quotient and remainder in pointer values
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*mod = a % b;
	*div = a / b;
}

/* #include <stdio.h>

void main(void)
{
	int a = 3;
	int b = 2;

	int *div = &a;
	int *mod = &b;

	ft_div_mod(a, b, div, mod);
	printf("Result: %i, %i", *div, *mod);
} */
