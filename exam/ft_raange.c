#include <stdlib.h>
#include <stdio.h>

int	give_size(int start, int end)
{
	int space;

 	space = 1;

	if (end > start)
		space += (end - start);
	else if (start > end)
		space += (start - end);
	return (space);
}

int	*ft_rangge(int start, int end)
{
	int i = 0;
	int space = give_size(start, end);
	int *array = malloc(sizeof(int) * space);
	while (i < space)
	{
		if (end > start)
			array[i] = end - i;
		else
			array[i] = end + i;
		i++;
	}
	return (array);
}

int main(void)
{
	int start = 1;
	int end = -4;
	int *array = ft_rangge(start, end);
	int size = give_size(start, end);
	for (int i = 0; i < size; i++)
		printf("%i\n", array[i]);
}
