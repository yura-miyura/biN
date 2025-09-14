/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-10 16:50:45 by yartym            #+#    #+#             */
/*   Updated: 2025-09-10 16:50:45 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	index;

	src_len = 0;
	while (src[src_len] != '\0')
	{
		dest[src_len] = src[src_len];
		src_len++;
	}
	index = src_len;
	while (index < size)
	{
		dest[index] = '\0';
		index++;
	}
	return (src_len);
}

/* #include <stdio.h>
#include <bsd/string.h>
int main(void)
{
	unsigned int	size = 10;
	char *src = "hello";
	char dest[10];
	printf("%i\n", ft_strlcpy(dest, src, size));
	printf("%i\n", strlcpy(dest, src, size));
	printf("%s\n", dest);
}
 */
