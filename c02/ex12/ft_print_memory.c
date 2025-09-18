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
	if (nb >= HEX)
		number_to_hex(nb / HEX, padding + 1);
	if (nb < HEX)
		while (++padding < HEX)
			write(1, "0", 1);
	write(1, &array[nb % HEX], 1);
}

void	first_column(void *addr, int counter)
{
	unsigned long long	addr_as_number;

	addr_as_number = (unsigned long long) addr;
	number_to_hex(addr_as_number, counter);
	write(1, ": ", 2);
}

void	second_column(char *str_addr, unsigned int size, int counter)
{
	char	*array;

	array = "0123456789abcdef";
	while (counter < HEX && size > 0)
	{
		write(1, &array[*str_addr / HEX], 1);
		write(1, &array[*str_addr % HEX], 1);
		if (!(counter++ % 2 == 0))
			write(1, " ", 1);
		str_addr++;
		size--;
	}
	while (counter < HEX)
	{
		write(1, "  ", 2);
		if (!(counter++ % 2 == 0))
			write(1, " ", 1);
	}
}

void	third_column(char *str_addr, unsigned int size, int counter)
{
	while (counter < HEX && size > 0)
	{
		if (*str_addr < ' ' || *str_addr > '~')
			write(1, ".", 1);
		else
			write(1, str_addr, 1);
		str_addr++;
		counter++;
		size--;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char			*str_addr;
	unsigned int	index;

	if (addr == NULL)
		return (NULL);
	index = 0;
	str_addr = (char *)addr;
	while (index <= size)
	{
		first_column(str_addr + index, 0);
		second_column (str_addr + index, size - index, 0);
		third_column(str_addr + index, size - index, 0);
		index += HEX;
	}
	return (addr);
}

/* #include <string.h>
#include <stdio.h>
int main(void)
{
	// char *str = NULL;
	char *str = "Bonjour les aminf ches ";
	void *addr = str;

	ft_print_memory(addr, size);
}
 */
