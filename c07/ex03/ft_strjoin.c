/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:36:47 by mmarcott          #+#    #+#             */
/*   Updated: 2022/10/02 20:29:41 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strlen_tstr(int size, char **strs)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
		total += ft_strlen(strs[i++]);
	return (total);
}

void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i])
	{
		dest[j++] = src[i];
		i++;
	}
	dest[j] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*p;
	int		istrs;

	p = malloc(ft_strlen(sep) + ft_strlen_tstr(size, strs) + 1);
	p[0] = '\0';
	istrs = 0;
	while (istrs < size)
	{
		ft_strcat(p, strs[istrs]);
		if (istrs != size - 1)
			ft_strcat(p, sep);
		istrs++;
	}
	return (p);
}
