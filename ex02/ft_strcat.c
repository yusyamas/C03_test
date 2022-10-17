/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 12:03:19 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/16 18:20:56 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_NULL '\0'

char	*ft_strcat(char *dest, char *src)
{
	char	*c;

	c = dest;
	while (*c != FT_NULL)
	{
		c += 1;
	}
	while (1)
	{
		*c = *src;
		if (*src == FT_NULL)
		{
			break ;
		}
		c += 1;
		src += 1;
	}
	return (dest);
}
