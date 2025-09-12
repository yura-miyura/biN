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

void	ft_ptchar(char c)
{
	write(1, &c, 1);
}
void	char_to_hex(char c)
{
	char hex_number;
	char hex_letter;

	hex_number = (c / 16) + '0';
	hex_letter = c % 16;
	if (hex_letter >= 10 && hex_letter <= 15)
		hex_letter += 87;
	else
		hex_letter += '0';
	ft_ptchar(hex_number);
	ft_ptchar(hex_letter);
}

void	first_column (void *addr)
{
	unsigned  long	addr_as_number;

	addr_as_number = (unsigned long) addr;
	printf("%p\n", addr);
	printf("%lx\n", addr_as_number);
}

void	*ft_print_memory(void *addr, unsigned int size)
{

}

int main(void)
{
	char *str = "Bonjour les aminches\n\n\nc\n est fo u\ntout\nce qu on peut faire avec\n\n\nprint_memory\n\n\n\nlol\nlol\n \n";
	unsigned int size = 17;
	void *addr = str;

	first_column (addr);
	// ft_print_memory(addr, size);
}
