/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 21:13:50 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/24 00:28:44 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	fill_remainder(unsigned int size, unsigned int length, char *dest)
{
	while (size > length)
	{
		*dest = '\0';
		dest++;
		size--;
	}
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	length;

	length = 0;
	if (size > 0)
	{
		while (*src != '\0')
		{
			if (length == size - 1)
				break ;
			*dest = *src;
			src++;
			dest++;
			length++;
		}
	}
	*dest = '\0';
	fill_remainder(size, length, dest);
	while (*src != '\0')
	{
		length++;
		src++;
	}
	return (length);
}
