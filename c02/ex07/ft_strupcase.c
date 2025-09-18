/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-10 14:56:12 by yartym            #+#    #+#             */
/*   Updated: 2025-09-10 14:56:12 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 'a' - 'A';
		index++;
	}
	return (str);
}

/* #include <stdio.h>
int main(void)
{
	char str[] = "hello";

	printf("Before: %s\n", str);
	printf("After: %s\n", ft_strupcase(str));
}
*/
