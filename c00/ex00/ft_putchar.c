/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-06 15:16:25 by yartym            #+#    #+#             */
/*   Updated: 2025-09-06 15:16:25 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// This is the main function to test ft_putchar function

// void	ft_putchar(char c);

// int	main(void)
// {
// 	ft_putchar('c');
// }

// Function that writes a single character
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
