/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 23:57:04 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/24 05:31:05 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

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
	unsigned int		i;

	length = ft_strlen(dest);
	buff = dest;
	buff += length;
	i = 0;
	while (*src != '\0' && i < nb)
	{
		*buff++ = *src++;
		i++;
	}
	*buff = '\0';
	return (dest);
}
