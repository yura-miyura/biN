/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-12 10:19:40 by yartym            #+#    #+#             */
/*   Updated: 2025-09-12 10:19:40 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>
#define HEX 16

void	number_to_hex(unsigned long long nb, int padding)
{
	char	*array;

	array = "0123456789abcdef";
	if (padding < HEX - 1)
		number_to_hex(nb / HEX, padding + 1);
	write(1, &array[nb % HEX], 1);
}

void	first_column(void *addr, int counter)
{
	number_to_hex((unsigned long long) addr, counter);
	write(1, ": ", 2);
}

void	second_column(unsigned char *str_addr, unsigned int size)
{
	char	*array;
	int		i;

	i = 0;
	array = "0123456789abcdef";
	while (i < HEX)
	{
		if (size > 0)
		{
			write(1, &array[str_addr[i] / HEX], 1);
			write(1, &array[str_addr[i] % HEX], 1);
			size--;
		}
		else
			write(1, "  ", 2);
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
}

void	third_column(unsigned char *str_addr, unsigned int size)
{
	int	i;

	i = 0;
	while (i < HEX && size > 0)
	{
		if (str_addr[i] >= ' ' && str_addr[i] <= '~')
			write(1, &(str_addr[i]), 1);
		else
			write(1, ".", 1);
		i++;
		size--;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char			*str_addr;
	unsigned int	i;

	if (addr == NULL)
		return (NULL);
	i = 0;
	str_addr = (unsigned char *)addr;
	while (i < size)
	{
		first_column(str_addr + i, 0);
		second_column (str_addr + i, size - i);
		third_column(str_addr + i, size - i);
		i += HEX;
	}
	return (addr);
}

/* #include <string.h>
#include <stdio.h>
int main(void)
{
	// char *str = NULL;
	char *str = "Bonjor les aminfaches ";
	void *addr = str;
	int size = strlen(str) + 1;

	ft_print_memory(addr, size);
}
*/
