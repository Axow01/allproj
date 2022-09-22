/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 21:13:50 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/22 14:00:16 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len(char *src)
{
	int	index;

	index = 0;
	while (*src != '\0')
	{
		index++;
		src++;
	}
	return (index);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		if (size == 0)
			dest[index] = 0;
		else if ((unsigned)index < size - 1)
			dest[index] = src[index];
		else
			dest[index] = 0;
		index++;
	}
	while ((int)index < len(dest))
	{
		dest[index] = 0;
		index ++;
	}
	return ((unsigned)len(src));
}
