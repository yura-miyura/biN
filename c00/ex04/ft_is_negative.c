/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 14:52:17 by yartym            #+#    #+#             */
/*   Updated: 2025/09/04 14:52:20 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// function displays value depending on the parameter
void	ft_is_negative(int n)
{
	char	letter;

	if (n < 0)
	{
		letter = 'N';
	}
	else
	{
		letter = 'P';
	}
	write(1, &letter, 1);
}

// Main function to test exercise
// int	main(void)
// {
//	ft_is_negative(-1);
// 	ft_is_negative(10);
// 	ft_is_negative(5);
// 	ft_is_negative(1000);
// 	ft_is_negative(-1100101);
// }
