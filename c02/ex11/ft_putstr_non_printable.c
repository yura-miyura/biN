/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-10 18:22:41 by yartym            #+#    #+#             */
/*   Updated: 2025-09-10 18:22:41 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_ptchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr_non_printable(char *str)
{
	int	i;
	char *array;

	array = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if (str[i] < ' ' || str[i] > '~')
		{
			ft_ptchar('\\');
			ft_ptchar(array[str[i] / 16]);
			ft_ptchar(array[str[i] % 16]);
		}
		else
			ft_ptchar(str[i]);
		i++;
	}
}

/* int main(void)
{
	char str[] ={'h', '\n', '3', 17, '\0'};
	ft_putstr_non_printable(str);
}
 */
