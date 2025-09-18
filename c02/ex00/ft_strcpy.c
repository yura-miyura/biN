/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-10 07:16:35 by yartym            #+#    #+#             */
/*   Updated: 2025-09-10 07:16:35 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Fnct recreates strcpy from <string.h>,
but it doesn't fill empty spaces with \0 */
char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

/* #include <stdio.h>
int	main(void)
{
	char *src = "why are you";
	char dest[12];
	ft_strcpy(dest, src);
	printf("%s\n", dest);
}
 */
