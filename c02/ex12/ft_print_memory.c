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
// Fucking delete it
#include <stdio.h>

void	number_to_hex(unsigned long long nb)
{
	char *array;

	array = "0123456789abcdef";
	if (nb >= 16)
		number_to_hex(nb / 16);
	write(1, &array[nb%16], 1);
}

void	first_column (void *addr)
{
	unsigned long long	addr_as_number;

	addr_as_number = (unsigned long long) addr;
	write(1, "0000000", 7);
	number_to_hex(addr_as_number);
	write(1, ": ", 2);
}

void second_column (char *str_addr, unsigned int size, int counter)
{
	char *array;

	array = "0123456789abcdef";
	if (*str_addr == '\0')
	{
		write (1, "\t\t", 1);
		return;
	}
	else if (counter == size)
		return;
	write(1, &array[*str_addr/16], 1);
	write(1, &array[*str_addr%16], 1);
	if (!(counter % 2 == 0))
		write(1, " ", 1);
	second_column(str_addr + 1, size, counter + 1);
}

int	third_column(char *str_addr, unsigned int size)
{
	while (size > 0)
	{
		size--;
			write(1, "\0", 1);
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
	char *str_addr;
	int full_stop;

	str_addr = addr;
	first_column(addr);
	second_column (str_addr, size, 0);
	full_stop = third_column(str_addr, size);
	if (full_stop == 1)
		return (addr);
	ft_print_memory(addr + size, size);
	return (addr);
}

int main(void)
{
	char *str = "Bonjour les aminches\n\n\nc\n est fou\ntout\nce qu on peut faire avec\n\n\nprint_memory\n\n\n\nlol\nlol\n \n";
	unsigned int size = 14;
	void *addr = str;

	ft_print_memory(addr, size);
}
