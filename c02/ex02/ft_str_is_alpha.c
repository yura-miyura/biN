/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-10 10:38:45 by yartym            #+#    #+#             */
/*   Updated: 2025-09-10 10:38:45 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Fnct that checks if it's alphabetic character
int	ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!((str[index] >= 'A' && str[index] <= 'Z') \
			|| (str[index] >= 'a' && str[index] <= 'z')))
			return (0);
		index++;
	}
	return (1);
}

/* #include <stdio.h>
int main(void)
{
	char *str = "sadf";
	printf("%i\n", ft_str_is_alpha(str));
} */
