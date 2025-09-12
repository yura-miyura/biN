/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-06 15:14:40 by yartym            #+#    #+#             */
/*   Updated: 2025-09-06 15:14:40 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// This function displays  number from in a way that
// every next number should be bigger then previous one

void	ft_print_comb(void)
{
	char	*nums;

	nums[0] = '0';
	while (nums[0] <= '7')
	{
		nums[1] = nums[0] + 1;
		while (nums[1] <= '8')
		{
			nums[2] = nums[1] + 1;
			while (nums[2] <= '9')
			{
				write(1, nums, 3);
				if (nums[0] != '7')
				{
					write(1, ", ", 2);
				}
				nums[2]++;
			}
			nums[1]++;
		}
		nums[0]++;
	}
}
// Main function to test exercise
// int main(void)
// {
// 	ft_print_comb();
// }
