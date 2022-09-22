/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 21:52:50 by mmarcott          #+#    #+#             */
/*   Updated: 2022/09/21 22:42:38 by mmarcott         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int		length;
	char	*buff;

	buff = src;
	length = ft_strlen(dest);
	while(*buff != '\0')
	{
		dest[length] = *buff;
		length++;
		buff++;
	}
	dest[length] = '\0';
	return (dest);
}