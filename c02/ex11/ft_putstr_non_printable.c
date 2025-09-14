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
void char_to_hex(char c)
{
	char *array;

	array = "0123456789abcdef";

	if (c > 15)
		char_to_hex(c / 16);
 	ft_ptchar(array[c % 16]);
}

void ft_putstr_non_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < ' ' || str[index] > '~')
		{
			ft_ptchar('\\');
			if (str[index] < 16)
				ft_ptchar('0');
			char_to_hex(str[index]);
		}
		else
			ft_ptchar(str[index]);
		index++;
	}
}

/* int main(void)
{
	char str[] ={'h', '\n', '3', 17, '\0'};
	ft_putstr_non_printable(str);
}
*/
