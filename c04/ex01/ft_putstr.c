// Header
#include <unistd.h>

void	ft_putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
}

/* int main(void)
{
	char *str = "Hello";
	ft_putstr(str);
}
*/
