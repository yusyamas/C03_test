/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 22:10:17 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/17 13:14:14 by yusyamas         ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	length;

	length = ft_strlen(src);
	ft_memcpy(dest, src, length + 1);
	return (dest);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*d;
	char	*s;

	d = dest;
	s = src;
	while (*s != FT_NULL && n)
	{
		*d = *s;
		d += 1;
		s += 1;
		n -= 1;
	}
	while (n)
	{
		*d = FT_NULL;
		d += 1;
		n -= 1;
	}
	return (dest);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dlen;
	unsigned int	slen;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (slen < nb)
		ft_strcpy(&dest[dlen], src);
	else
	{
		ft_strncpy(&dest[dlen], src, nb);
		dest[dlen + nb] = '\0';
	}
	return (dest);
}
