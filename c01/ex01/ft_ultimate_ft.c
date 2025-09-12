/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-07 08:51:42 by yartym            #+#    #+#             */
/*   Updated: 2025-09-07 08:51:42 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Declines value 42 to a pointer of a pointer of ...
void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

// Main with lots of pointers to test
/* #include <stdio.h>
void main(void)
{
	int i = 1;
	int *p1 = &i;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4 = &p3;
	int *****p5 = &p4;
	int ******p6 = &p5;
	int *******p7 = &p6;
	int ********p8 = &p7;
	int *********nbr = &p8;
	ft_ultimate_ft(nbr);
	printf("%i", *********nbr);
}
 */
