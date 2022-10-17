/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:02:52 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/17 12:39:40 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_NULL '\0'

unsigned int	ft_strlen(char *str)
{
	unsigned int	length;

	length = 0;
	while (*str != FT_NULL)
	{
		length += 1;
		str += 1;
	}
	return (length);
}

unsigned int	ft_strnlen(char *str, unsigned int maxlen)
{
	unsigned int	length;

	length = 0;
	while (length < maxlen)
	{
		if (*str == FT_NULL)
			break ;
		length += 1;
		str += 1;
	}
	return (length);
}

char	*ft_memcpy(char *dest, char *src, unsigned int len)
{
	char	*c;

	c = dest;
	while (len > 0)
	{
		*dest = *src;
		dest += 1;
		src += 1;
		len -= 1;
	}
	return (c);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	srclen;
	unsigned int	destlen;

	srclen = ft_strlen(src);
	destlen = ft_strnlen(dest, size);
	if (destlen == size)
		return (size + srclen);
	if (srclen < size - destlen)
		ft_memcpy(dest + destlen, src, srclen + 1);
	else
	{
		ft_memcpy(dest + destlen, src, size - destlen - 1);
		dest[size - 1] = FT_NULL;
	}
	return (destlen + srclen);
}
