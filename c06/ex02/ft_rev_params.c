/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-18 16:22:44 by yartym            #+#    #+#             */
/*   Updated: 2025-09-18 16:22:44 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	len;

	len = argc - 1;
	while (len > 0)
	{
		i = 0;
		while (argv[len][i])
		{
			write(1, argv[len] + i++, 1);
		}
		write(1, "\n", 1);
		len--;
	}
}
