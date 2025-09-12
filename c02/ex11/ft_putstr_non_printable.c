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
	char hex_number;
	char hex_letter;

	hex_number = (c / 16) + '0';
	hex_letter = c % 16;
	if (hex_letter >= 10 && hex_letter <= 15)
		hex_letter += 87;
	else
		hex_letter += '0';
	ft_ptchar('\\');
	ft_ptchar(hex_number);
	ft_ptchar(hex_letter);
}
void ft_putstr_non_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < ' ' || str[index] > '~')
				char_to_hex(str[index]);
		else
			ft_ptchar(str[index]);
		index++;
	}
}

int main(void)
{
	char *str = "Hello\vHow\rare\tyou?";
	ft_putstr_non_printable(str);
}
