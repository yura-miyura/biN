/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 12:49:30 by yartym            #+#    #+#             */
/*   Updated: 2025/09/06 16:13:55 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

// Converts integer to characters and displayes it in 00 format
void	from_int_to_pointer(int number)
{
	char	numbers[2];

	numbers[1] = number % 10 + '0';
	if (number > 9)
	{
		numbers[0] = (number - number % 10) / 10 + '0';
	}
	else
	{
		numbers[0] = '0';
	}
	write(1, &numbers, 2);
}

// Displayes two counters that starts from 00 00, .. .., 98 99
void	ft_print_comb2(void)
{
	int	num0;
	int	num1;

	num0 = 0;
	while (num0 <= 98)
	{
		num1 = num0 + 1;
		while (num1 <= 99)
		{
			from_int_to_pointer(num0);
			write(1, " ", 1);
			from_int_to_pointer(num1);
			if (!(num0 == 98 && num1 == 99))
			{
				write(1, ", ", 2);
			}
			num1++;
		}
		num0++;
	}
}
// Main function to test the code
// int	main(void)
// {
// 	ft_print_comb2();
// }
