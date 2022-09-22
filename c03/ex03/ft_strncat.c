/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 23:57:04 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/22 00:20:46 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int		length;
	char	*buff;
	int		i;

	length = ft_strlen(dest);
	buff = src;
	i = 0;
	while (*buff != '\0')
	{
		if (i < (int)nb)
			dest[length] = *buff;
		else
			dest[length] = 0;
		length++;
		buff++;
		i++;
	}
	dest[length] = '\0';
	return (dest);
}