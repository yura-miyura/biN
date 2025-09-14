/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yartym <yartym@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-09-13 12:11:12 by yartym            #+#    #+#             */
/*   Updated: 2025-09-13 12:11:12 by yartym           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		index_to_find;
	int		index_str;

	index_str = 0;
	if (*to_find == '\0')
		return (str);
	while (str[index_str])
	{
		index_to_find = 0;
		while (str[index_str + index_to_find] == to_find[index_to_find])
		{
			index_to_find++;
			if (to_find[index_to_find] == '\0')
				return (&str[index_str]);
		}
		index_str++;
	}
	return (0);
}

/* #include <string.h>
#include <stdio.h>
int main(void)
{
	char *str = "hello my name is Yurii and I'm Yurii in 42 campus";
	char *to_find = "hello";
	printf("%p\n", ft_strstr(str, to_find));
	printf("%p\n", strstr(str, to_find));
}
 */
