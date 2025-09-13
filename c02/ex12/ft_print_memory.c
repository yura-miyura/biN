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

int	number_to_hex(unsigned long long nb)
{
	char	*array;

	array = "0123456789abcdef";
	if (nb >= 16)
		number_to_hex(nb / 16);
	write(1, &array[nb % 16], 1);
}

void	first_column(void *addr)
{
	unsigned long long	addr_as_number;
	int					length;

	length = 0;
	addr_as_number = (unsigned long long) addr;
	while (addr_as_number >= 16)
	{
		addr_as_number /= 16;
		length++;
	}
	while (16 - length > 0)
	{
		write(1, "0", 1);
		length++;
	}
	addr_as_number = (unsigned long long) addr;
	number_to_hex(addr_as_number);
	write(1, ": ", 2);
}

void	second_column(char *str_addr, unsigned int size)
{
	char	*array;
	int		stop;

	stop = 0;
	array = "0123456789abcdef";
	while (16 - size < 16)
	{
		write(1, &array[*str_addr / 16], 1);
		write(1, &array[*str_addr % 16], 1);
		if (!(counter % 2 == 0))
			write(1, " ", 1);
		if (*str_addr == '\0')
			stop = 1;
		counter++;
		str_addr++;
	}
	while (counter < size)
	{
		write(1, "  ", 2);
		if (!(counter % 2 == 0))
			write(1, " ", 1);
		counter++;
	}
}

int	third_column(char *str_addr, unsigned int size)
{
	while (size > 0)
	{
		size--;
		if (*str_addr == '\0')
		{
			write(1, ".\n", 2);
			return (1);
		}
		else if (*str_addr < ' ' || *str_addr > '~')
			write(1, ".", 1);
		else
			write(1, str_addr, 1);
		str_addr++;
	}
	write(1, "\n", 1);
	return (0);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	*str_addr;
	int		number_of_rows;
	int		full_stop;

	str_addr = addr;
	number_of_rows = size / 16;
	first_column(addr);
	second_column (str_addr, size, number_of_rows);
	full_stop = third_column(str_addr, size);
	if (full_stop == 1)
		return (addr);
	ft_print_memory(addr + size, size);
	return (addr);
}

#include <strlen.h>
int main(void)
{
	char *str = "0123456789012345";
	unsigned int size = strlen(str);
	void *addr = str;

	ft_print_memory(addr, size);
}
