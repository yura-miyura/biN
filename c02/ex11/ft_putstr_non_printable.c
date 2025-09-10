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

}
void ft_putstr_non_printable(char *str)
{
	int	index;
	char hex[] = "\\00"

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < '!' || str[index] > '~')
			{
				write(1, )
			}
		else
			write (1, str[index], 1);
		index++;
	}
}

int main(void)
{
	char *str = "Hello\nHow are you?"
	ft_putstr_non_printable(str);
}
