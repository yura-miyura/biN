/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-07 12:13:48 by yartym            #+#    #+#             */
/*   Updated: 2025-09-07 12:13:48 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		counter++;
		str++;
	}
	return (counter);
}

// Test me
/* #include <stdio.h>
int	main(void)
{
	char *string = "HI";
	printf("Length of the string \"%s\" is %i\n", string, ft_strlen(string));
}
 */
