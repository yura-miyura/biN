/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-10 12:54:12 by yartym            #+#    #+#             */
/*   Updated: 2025-09-10 12:54:12 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Fnction returns everything
int	ft_str_is_numeric(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!(str[index] >= '0' && str[index] <= '9'))
			return (0);
		index++;
	}
	return (1);
}

/* #include <stdio.h>
int main(void)
{
	char *str = "5345";
	printf("%i\n", ft_str_is_numeric(str));
}
 */
