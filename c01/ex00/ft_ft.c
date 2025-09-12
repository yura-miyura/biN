/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-07 08:32:49 by yartym            #+#    #+#             */
/*   Updated: 2025-09-07 08:32:49 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// changing the number to 42, but referencing in the same memorry location
void	ft_ft(int *nbr)
{
	*nbr = 42;
}

// Main to test function ft_ft
/* #include <stdio.h>
void main(void)
{
	int i = 1;
	int *nbr = &i;
	ft_ft(nbr);
	printf("%i", *nbr);
} */
