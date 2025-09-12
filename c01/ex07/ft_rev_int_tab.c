/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-07 13:34:25 by yartym            #+#    #+#             */
/*   Updated: 2025-09-07 13:34:25 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	index;

	index = 0;
	while (index < size)
	{
		tmp = tab[index];
		tab[index] = tab[size - 1];
		tab[size - 1] = tmp;
		size--;
		index++;
	}
}

/* #include <stdio.h>
int	main(void)
{
	int	numbers[10] = {1,2,3,4,5,6,7,8,9,10};
	int	l = 10;
	int	index = 0;
	ft_rev_int_tab(numbers, l);

	while (l > index)
	{
		printf("%i\n", numbers[index++]);
	}
}*/
