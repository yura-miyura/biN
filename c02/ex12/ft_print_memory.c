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

#define HEX 16

void space_padding(int counter)
{
	if (!(counter % 2 == 0))
		write(1, " ", 1);
}

void	number_to_hex(unsigned long long nb, int counter)
{
	char	*array;

	array = "0123456789abcdef";
	if (nb >= HEX)
		number_to_hex(nb / HEX, counter + 1);
	if (nb < HEX)
	 	while (counter++ < HEX)
			write(1, "0", 1);
	write(1, &array[nb % HEX], 1);
}

void	first_column(void *addr, int counter)
{
	unsigned long long	addr_as_number;
	addr_as_number = (unsigned long long) addr;
	number_to_hex(addr_as_number, 1);
	write(1, ": ", 2);
}

void	second_column(char *str_addr, unsigned int size, int counter)
{
	char	*array;

	array = "0123456789abcdef";
	while (*str_addr && counter < HEX)
	{
		write(1, &array[*str_addr / HEX], 1);
		write(1, &array[*str_addr % HEX], 1);
		space_padding(counter);
		counter++;
		str_addr++;
	}
	if (*str_addr == '\0' && counter < HEX)
		write(1, "00", 2);
		space_padding(counter);
		counter++;
	while (counter < HEX)
	{
		write(1, "  ", 2);
		space_padding(counter);
		counter++;
	}
}

void third_column(char *str_addr, int counter)
{
	while (counter < HEX)
	{
		if (*str_addr == '\0')
		{
			write(1, ".", 1);
			counter = HEX;
		}
		else if (*str_addr < ' ' || *str_addr > '~')
			write(1, ".", 1);
		else
			write(1, str_addr, 1);
		str_addr++;
		counter++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	*str_addr;
	int		counter;

	counter = 0;
	str_addr = addr;
	first_column(addr, counter);
	second_column (str_addr, size, counter);
	third_column(str_addr, counter);
	if (size >= HEX)
		ft_print_memory(addr + HEX, size - HEX);
	return (addr);
}

#include <string.h>
int main(void)
{
	// char *str = "Bonjour les aminches\n\n\nc\n est fou\ntout\nce qu on peut faire avec\n\n\nprint_memory\n\n\n\nlol\nlol\n ";
	char *str = "this is a hole journey how I wrote this shit for three days \n and it's goint to compile for fucking sure\n life shit and then you die how Ellie's dad sad";
	unsigned int size = strlen(str);
	void *addr = str;

	ft_print_memory(addr, size);
}
