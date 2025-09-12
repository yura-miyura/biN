// header
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

#include <stdio.h>
void	*ft_print_memory(void *addr, unsigned int size)
{
	// char *str_addr;
	// str_addr = (char *) &addr;
	// printf("%s\n", str_addr);
	// return (addr);
}

#include <stdlib.h>
int main(void)
{
	char *str = "Bonjour les amin";
	unsigned int size = 17;
	void *addr = str;

	ft_print_memory(addr, size);
}
