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

void	pnt_in_hex(unsigned char c)
{
	char	*array;

	array = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &array[c / 16], 1);
	write(1, &array[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= ' ' && str[i] <= '~')
			write(1, &str[i], 1);
		else
			pnt_in_hex((unsigned char) str[i]);
		i++;
	}
}

/* int main(void)
{
	char *str = "Hello \n\t why it's not fucking\n working?";
	ft_putstr_non_printable(str);
}
*/
