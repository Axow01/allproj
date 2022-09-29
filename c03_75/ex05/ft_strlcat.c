/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:40:33 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/24 00:08:25 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		i;
	char	*buffer;

	i = 0;
	buffer = str;
	while (*buffer != '\0')
	{
		buffer++;
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lengthdest;
	unsigned int	totalsize;
	char			*buffer;
	char			*buffer2;

	lengthdest = ft_strlen(dest);
	totalsize = lengthdest;
	buffer = src;
	buffer2 = dest;
	buffer2 = buffer2 + lengthdest;
	while (*buffer != '\0')
	{
		if ((int)size - (int)totalsize > 1)
		{
			*buffer2 = *buffer;
		}
		totalsize++;
		lengthdest++;
		buffer++;
		buffer2++;
	}
	if (size && size >= lengthdest)
		dest[lengthdest] = '\0';
	return (totalsize);
}
