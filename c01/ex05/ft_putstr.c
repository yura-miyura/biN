/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-07 11:50:01 by yartym            #+#    #+#             */
/*   Updated: 2025-09-07 11:50:01 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Print string in a simplest possible way
void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}
// Test me
/* #include <stdio.h>
int	main(void)
{
	char *str = "Hello World!\n";
	ft_putstr(str);
} */
