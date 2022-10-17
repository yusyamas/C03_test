/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 22:45:55 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/17 12:23:44 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define FT_NULL '\0'

int	ft_strstr_match_check(char *a, char *b)
{
	while (1)
	{
		if (*b == FT_NULL)
			return (1);
		if (*a != *b)
			return (0);
		a += 1;
		b += 1;
	}
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*a;
	char	*b;

	b = to_find;
	if (*b == FT_NULL)
		return (str);
	while (*str != FT_NULL)
	{
		if (*str != *b)
		{
			str += 1;
			continue ;
		}
		a = str;
		if (ft_strstr_match_check(a, b))
		{
			return (str);
		}
		b = to_find;
		str += 1;
	}
	return (NULL);
}
