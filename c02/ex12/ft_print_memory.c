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

void	ft_puthex(unsigned long long nb)
{
	char *array;

	array = "0123456789abcdef";
	if (nb >= 16)
		ft_puthex(nb / 16);
	write(1, &array[nb%16], 1);
}

void	first_column (void *addr)
{
	unsigned long long	addr_as_number;

	addr_as_number = (unsigned long long) addr;
	printf("%p\n", addr);
	printf("%lli\n", addr_as_number);
}

// void	*ft_print_memory(void *addr, unsigned int size)
// {

// }

int main(void)
{
	char *str = "Bonjour les aminches\n\n\nc\n est fo u\ntout\nce qu on peut faire avec\n\n\nprint_memory\n\n\n\nlol\nlol\n \n";
	unsigned int size = 17;
	void *addr = str;
	unsigned long long	addr_as_number = addr_as_number = (unsigned long long) addr;

	printf("%p\n", addr);
	ft_puthex(addr_as_number);
	// ft_print_memory(addr, size);
}
