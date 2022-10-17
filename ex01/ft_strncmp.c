/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:04:44 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/17 12:58:32 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_NULL '\0'

int	my_strncmp(char *s1, char *s2, unsigned int n)
{
	int	ret;

	ret = 0;
	if (n == 0)
	{
		return (0);
	}
	while (n != 0)
	{
		if (*s1 != *s2)
		{
			ret = *(unsigned char *)s1 - *(unsigned char *)s2;
			return (ret);
		}
		if (*s1 == FT_NULL)
		{
			break ;
		}
		s1 += 1;
		s2 += 1;
		n -= 1;
	}
	return (0);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	check_flag;

	check_flag = my_strncmp(s1, s2, n);
	if (check_flag == 0)
	{
		return (0);
	}
	else if (check_flag < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
