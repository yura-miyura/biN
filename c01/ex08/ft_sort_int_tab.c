// #include <stdio.h>
// void	ft_sort_int_tab(int *tab, int size)
// {
// 	int i;
// 	int tmp;

// 	while (size > 0)
// 	{
// 		i = 0;
// 		tmp = tab[size - 1];
// 		while (i < size)
// 		{
// 			if (tab[i] > tab[size - 1])
// 			{
// 				tmp = tab[size - 1];
// 				tab[size - 1] = tab[i];
// 				tab[i] = tmp;
// 			}
// 			i++;
// 		}
// 		size--;
// 	}
// }

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int k;
	int tmp;

	k = 0;
	while (k < size)
	{
		i = k;
		tmp = tab[k];
		while (i < size)
		{
			if (tab[i] < tab[k])
			{
				tmp = tab[k];
				tab[k] = tab[i];
				tab[i] = tmp;
			}
			i++;
		}
		k++;
	}
}

#include <stdio.h>
int	main(void)
{
	int tab[10] = {-1, 1, 99, 2, 1, 4, 3, 2, 1, 0};
	int counter = 0;
	ft_sort_int_tab(tab, 10);
	for (int i = 0; i < 10; i++)
	{
		printf("counter: %i %i\n", counter++, tab[i]);
	}
}
