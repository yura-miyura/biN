/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-13 12:05:02 by yartym            #+#    #+#             */
/*   Updated: 2025-09-13 12:05:02 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	index;

	index = 0;
	while (dest[index] != '\0')
		index++;
	while (*src)
		dest[index++] = *src++;
	dest[index] = '\0';
	return (dest);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
	char dest[12] = "hello ";
	char *src = "world";

	printf("%s\n", ft_strcat(dest, src));
	// printf("%s\n", strcat(dest, src));
}
*/
