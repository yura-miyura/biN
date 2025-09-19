/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-18 17:06:07 by yartym            #+#    #+#             */
/*   Updated: 2025-09-18 17:06:07 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

char	**ft_sort(int argc, char **argv)
{
	int		i;
	int		j;
	int		cmp;
	char	*tmp;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			cmp = ft_strcmp(argv[i], argv[j]);
			if (cmp > 0)
			{
				tmp = argv[i];
				argv[i] = argv[j];
				argv[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (argv);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	char **sorted_argv;

	sorted_argv = ft_sort(argc, argv);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (sorted_argv[i][j])
			write(1, sorted_argv[i] + j++, 1);
		write(1, "\n", 1);
		i++;
	}
}
