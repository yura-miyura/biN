/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-10 14:38:54 by yartym            #+#    #+#             */
/*   Updated: 2025-09-10 14:38:54 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!(str[index] >= ' '))
			return (0);
		index++;
	}
	return (1);
}

/* #include <stdio.h>
int main(void)
{
	char *str = "";
	printf("%i\n", ft_str_is_printable(str));
}
 */
